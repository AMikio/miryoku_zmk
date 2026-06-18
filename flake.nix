{
  description = "ZMK firmware build environment for Lily58 (miryoku)";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };

  outputs = {nixpkgs, ...}: let
    supportedSystems = [
      "x86_64-linux"
      "aarch64-linux"
    ];
    forEachSupportedSystem = f:
      nixpkgs.lib.genAttrs supportedSystems (
        system:
          f {
            pkgs = import nixpkgs {inherit system;};
          }
      );
  in {
    devShells = forEachSupportedSystem ({pkgs}: let
      zmk-setup = pkgs.writeShellScriptBin "zmk-setup" ''
        set -e
        echo "Initialising west workspace in $ZMK_DIR ..."
        cd "$ZMK_DIR"
        west init -l app
        west update
        west zephyr-export
      '';
      zmk-clean = pkgs.writeShellScriptBin "zmk-clean" ''
        echo "Removing $ZMK_DIR/app/build ..."
        rm -rf "$ZMK_DIR/app/build"
        echo "Done."
      '';
      zmk-build = pkgs.writeShellScriptBin "zmk-build" ''
        set -e
        side=''${1:-left}
        echo "Building lily58_''${side} ..."
        cd "$ZMK_DIR/app"
        west build --pristine -b nice_nano/nrf52840 -- \
          -DSHIELD="lily58_''${side}" \
          -DZMK_CONFIG="$ZMK_CONFIG" \
          -DDTS_EXTRA_CPPFLAGS="-DMIRYOKU_KEYBOARD_LILY58"
        echo "Firmware: $ZMK_DIR/app/build/zephyr/zmk.uf2"
      '';
    in {
      default = pkgs.mkShell {
        packages = with pkgs; [
          gcc-arm-embedded
          cmake
          ninja
          dtc
          git
          (python3.withPackages (ps:
            with ps; [
              west
              pyelftools
              pyyaml
              packaging
              colorama
            ]))
          zmk-setup
          zmk-build
          zmk-clean
        ];

        env = {
          ZEPHYR_TOOLCHAIN_VARIANT = "gnuarmemb";
          GNUARMEMB_TOOLCHAIN_PATH = "${pkgs.gcc-arm-embedded}";
        };

        shellHook = ''
          export ZMK_DIR="''${ZMK_DIR:-$HOME/zmk}"
          export ZMK_CONFIG="''${ZMK_CONFIG:-$(realpath .)/config}"

          echo
          echo "ZMK build environment ready."
          echo "  ZMK_DIR    = $ZMK_DIR"
          echo "  ZMK_CONFIG = $ZMK_CONFIG"
          echo
          echo "  zmk-setup               — one-time west workspace initialisation"
          echo "  zmk-build [left|right]  — build Lily58 firmware (default: left)"
          echo "  zmk-clean               — remove build artifacts"
          echo
        '';
      };
    });
  };
}
