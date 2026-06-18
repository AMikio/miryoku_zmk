// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_WIN

#define XXX &none

// FPS friendly tap layer
#define MIRYOKU_LAYER_GAME                                                     \
  &kp TAB, &kp Q, &kp W, &kp E, &kp R, &kp Y, &kp U, &kp I, &kp O, &kp P,      \
      &kp LSHFT, &kp A, &kp S, &kp D, &kp F, &kp H, &kp J, &kp K, &kp L,       \
      &kp SQT, &kp LCTRL, &kp Z, &kp X, &kp C, &kp V, &kp N, &kp M, &kp COMMA, \
      &kp DOT, &kp SLASH, U_NP, U_NP, &kp LALT, &kp SPC, &mo U_GAMENUM,        \
      &kp RET, &bspc_del, &kp DEL, U_NP, U_NP

#define MIRYOKU_LAYER_GAMENUM                                                  \
  &kp ESC, &kp N1, &kp N2, &kp N3, &kp T, &kp LBKT, &kp F7, &kp F8, &kp F9,    \
      &kp RBKT, &kp LSHFT, &kp N4, &kp N5, &kp N6, &kp G, &kp EQL, &kp F4,     \
      &kp F5, &kp F6, &kp SEMI, &kp LCTRL, &kp N7, &kp N8, &kp N9, &kp B,      \
      &kp BSLH, &kp F1, &kp F2, &kp F3, &kp GRAVE, U_NP, U_NP, &to U_BASE,     \
      &kp SPC, &none, &kp MINUS, &kp N0, &kp DOT, U_NP, U_NP

#define MIRYOKU_LAYER_LIST                                                     \
  MIRYOKU_X(BASE, "Base")                                                      \
  MIRYOKU_X(EXTRA, "Extra")                                                    \
  MIRYOKU_X(TAP, "Tap")                                                        \
  MIRYOKU_X(BUTTON, "Button")                                                  \
  MIRYOKU_X(NAV, "Nav")                                                        \
  MIRYOKU_X(MOUSE, "Mouse")                                                    \
  MIRYOKU_X(MEDIA, "Media")                                                    \
  MIRYOKU_X(NUM, "Num")                                                        \
  MIRYOKU_X(SYM, "Sym")                                                        \
  MIRYOKU_X(FUN, "Fun")                                                        \
  MIRYOKU_X(GAME, "Game")                                                      \
  MIRYOKU_X(GAMENUM, "GNum")

#define U_BASE 0
#define U_EXTRA 1
#define U_TAP 2
#define U_BUTTON 3
#define U_NAV 4
#define U_MOUSE 5
#define U_MEDIA 6
#define U_NUM 7
#define U_SYM 8
#define U_FUN 9
#define U_GAME 10
#define U_GAMENUM 11

#if defined(MIRYOKU_KEYBOARD_CORNE)

// clang-format off

#define MIRYOKU_LAYERMAPPING_BASE(                                                \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14,    \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,    \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                             \
  &dt_esc_game K00 K01 K02 K03 K04          K05 K06  K07 K08 K09 &kp C_VOL_UP     \
  U_PST        K10 K11 K12 K13 K14          K15 K16  K17 K18 K19 &kp C_VOL_DN     \
  U_CPY        K20 K21 K22 K23 K24          K25 K26  K27 K28 K29 &kp C_MUTE       \
                       K32 K33 K34          K35 K36  K37

#define MIRYOKU_LAYERMAPPING_NUM(                                                 \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14,    \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,    \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                             \
  &kp ESC      K00 K01 K02 K03 K24          K05 K06  K07 K08 K09 &kp C_VOL_UP      \
  U_PST        K10 K11 K12 K13 K00          K04 K16  K17 K18 K19 &kp C_VOL_DN      \
  U_CPY        K20 K21 K22 K23 K14          K25 K26  K27 K28 K29 &kp C_MUTE        \
                       K33 K32 K34          K35 K36  K37

#define MIRYOKU_LAYERMAPPING_SYM(                                                 \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14,    \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,    \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                             \
  &kp ESC      K00 K01 K02 K03 K24          K05 K06  K07 K08 K09 &kp C_VOL_UP      \
  U_PST        K10 K11 K12 K13 K32          K33 K16  K17 K18 K19 &kp C_VOL_DN      \
  U_CPY        K20 K21 K22 K23 K14          K25 K26  K27 K28 K29 &kp C_MUTE        \
                       K32 K33 K34          K35 K36  K37

#define MIRYOKU_LAYERMAPPING_FUN(                                                 \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14,    \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,    \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                             \
  &kp ESC      K00 K01 K02 K03 K04          K05 K06  K07 K08 K09 &kp C_VOL_UP      \
  U_PST        K10 K11 K12 K13 &kp LBRC     &kp RBRC K16 K17 K18 K19 &kp C_VOL_DN  \
  U_CPY        K20 K21 K22 K23 K24 K25      K26 K27  K28 K29 &kp C_MUTE            \
                    K32 K33 K34             K35 K36  K37

#define MIRYOKU_LAYERMAPPING_GAME(                                                \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14,    \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29,    \
    N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)                             \
  &dt_esc_base K00 K01 K02 K03 K04          K05 K06  K07 K08 K09 &kp C_VOL_UP      \
  U_PST        K10 K11 K12 K13 K14          K15 K16  K17 K18 K19 &kp C_VOL_DN      \
  U_CPY        K20 K21 K22 K23 K24          K25 K26  K27 K28 K29 &kp C_MUTE        \
                       K32 K33 K34          K35 K36  K37

#define MIRYOKU_LAYERMAPPING_GAMENUM MIRYOKU_MAPPING

// clang-format on

#endif

#if defined(MIRYOKU_KEYBOARD_LILY58)

// clang-format off

// Niri WM bindings — F13-F24 for workspaces/nav; Hyper+Fx macros for the rest.
// All are safe (no-ops) on systems that don't explicitly bind them.
#define NIRI_WS1      &kp LG(F13)
#define NIRI_WS2      &kp LG(F14)
#define NIRI_WS3      &kp LG(F15)
#define NIRI_WS4      &kp LG(F16)
#define NIRI_WS5      &kp LG(F17)
#define NIRI_WS6      &kp LG(F18)
#define NIRI_WS7      &kp LG(F19)
#define NIRI_WS8      &kp LG(F20)
#define NIRI_WS9      &kp LG(F21)
#define NIRI_OVW      &kp LG(F22)
#define NIRI_WS_PREV  &kp LG(F23)
#define NIRI_WS_NEXT  &kp LG(F24)
#define NIRI_CONSUME  &niri_consume
#define NIRI_EXPEL    &niri_expel
#define NIRI_MON_NEXT &niri_mon_next
#define NIRI_WIN_MON  &niri_win_mon
#define NIRI_SHRINK   &niri_shrink
#define NIRI_GROW     &niri_grow

#define MIRYOKU_LAYERMAPPING_BASE(                                             \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &ht_to_kp U_GAME ESC   NIRI_WS1    NIRI_WS2    NIRI_WS3    NIRI_WS4    NIRI_WS5                               NIRI_WS6    NIRI_WS7    NIRI_WS8    NIRI_WS9    NIRI_OVW   &kp C_MUTE     \
   NIRI_WS_PREV           K00         K01         K02         K03         K04                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   NIRI_WS_NEXT           K10         K11         K12         K13         K14                                    K15         K16         K17         K18         K19        &kp C_VOL_DN   \
   NIRI_CONSUME           K20         K21         K22         K23         K24   NIRI_MON_NEXT  NIRI_WIN_MON      K25         K26         K27         K28         K29        NIRI_EXPEL     \
                                                  NIRI_SHRINK K32         K33        K34                 K35     K36         K37         NIRI_GROW

#define MIRYOKU_LAYERMAPPING_NUM(                                              \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &kp ESC        &kp N1      &kp N2      &kp N3      &kp N4      &kp N5                                 &kp N6      &kp N7      &kp N8      &kp N9      &kp N0     &kp C_MUTE     \
   &kp PG_UP      K00         K01         K02         K03         K24                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   &kp PG_DN      K10         K11         K12         K13         K00                                    K04         K16         K17         K18         K19        &kp C_VOL_DN   \
   U_UND          K20         K21         K22         K23         K14        U_CPY             U_PST     K25         K26         K27         K28         K29        U_RDO          \
                                          &kp HOME    K33         K32        K34                 K35     K36         K37         &kp END

#define MIRYOKU_LAYERMAPPING_SYM(                                              \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &kp ESC        &kp N1      &kp N2      &kp N3      &kp N4      &kp N5                                 &kp N6      &kp N7      &kp N8      &kp N9      &kp N0     &kp C_MUTE     \
   &kp PG_UP      K00         K01         K02         K03         K24                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   &kp PG_DN      K10         K11         K12         K13         K32                                    K33         K16         K17         K18         K19        &kp C_VOL_DN   \
   U_UND          K20         K21         K22         K23         K14        U_CPY             U_PST     K25         K26         K27         K28         K29        U_RDO          \
                                          &kp HOME    K32         K33        K34                 K35     K36         K37         &kp END

#define MIRYOKU_LAYERMAPPING_FUN(                                              \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &kp ESC        &kp F1      &kp F2      &kp F3      &kp F4      &kp F5                                 &kp F6      &kp F7      &kp F8      &kp F9      &kp F10    &kp C_MUTE      \
   &kp PG_UP      K00         K01         K02         K03         K04                                    K05         K06         K07         K08         K09        &kp C_VOL_UP    \
   &kp PG_DN      K10         K11         K12         K13         &kp LBRC                               &kp RBRC    K16         K17         K18         K19        &kp C_VOL_DN    \
   U_UND          K20         K21         K22         K23         K24        U_CPY             U_PST     K25         K26         K27         K28         K29        U_RDO           \
                                          &kp HOME    K32         K33        K34                 K35     K36         K37         &kp END

#define MIRYOKU_LAYERMAPPING_GAME(                                             \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &ht_to_kp U_BASE ESC   &kp N1      &kp N2      &kp N3      &kp N4      &kp N5                                 &kp N6      &kp N7      &kp N8      &kp N9      &kp N0     &kp C_MUTE     \
   &kp PG_UP              K00         K01         K02         K03         K04                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   &kp PG_DN              K10         K11         K12         K13         K14                                    K15         K16         K17         K18         K19        &kp C_VOL_DN   \
   U_UND                  K20         K21         K22         K23         K24        U_CPY             U_PST     K25         K26         K27         K28         K29        U_RDO          \
                                                  &kp HOME    K32         K33        K34                 K35     K36         K37         &kp END

#define MIRYOKU_LAYERMAPPING_GAMENUM(                                             \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   &ht_to_kp U_BASE ESC   &kp F1      &kp F2      &kp F3      &kp F4      &kp F5                                 &kp F6      &kp F7      &kp F8      &kp F9      &kp F10    &kp C_MUTE     \
   &kp PG_UP              K00         K01         K02         K03         K04                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   &kp PG_DN              K10         K11         K12         K13         K14                                    K15         K16         K17         K18         K19        &kp C_VOL_DN   \
   U_UND                  K20         K21         K22         K23         K24        U_CPY             U_PST     K25         K26         K27         K28         K29        U_RDO          \
                                                  &kp HOME    K32         K33        K34                 K35     K36         K37         &kp END

#define MIRYOKU_LAYERMAPPING_STANDARD(                                         \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K10, K11, K12, K13, K14, \
    K15, K16, K17, K18, K19, K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, \
                N30, N31, K32, K33, K34, K35, K36, K37, N38, N39)              \
   XXX            NIRI_WS1    NIRI_WS2    NIRI_WS3    NIRI_WS4    NIRI_WS5               NIRI_WS6    NIRI_WS7    NIRI_WS8    NIRI_WS9    NIRI_OVW   &kp C_MUTE     \
   NIRI_WS_PREV   K00         K01         K02         K03         K04                                    K05         K06         K07         K08         K09        &kp C_VOL_UP   \
   NIRI_WS_NEXT   K10         K11         K12         K13         K14                                    K15         K16         K17         K18         K19        &kp C_VOL_DN   \
   NIRI_CONSUME   K20         K21         K22         K23         K24   NIRI_MON_NEXT  NIRI_WIN_MON      K25         K26         K27         K28         K29        NIRI_EXPEL     \
                                          NIRI_SHRINK K32         K33        K34                 K35     K36         K37         NIRI_GROW

#define MIRYOKU_LAYERMAPPING_EXTRA  MIRYOKU_LAYERMAPPING_STANDARD
#define MIRYOKU_LAYERMAPPING_TAP    MIRYOKU_LAYERMAPPING_STANDARD
#define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_LAYERMAPPING_STANDARD
#define MIRYOKU_LAYERMAPPING_NAV    MIRYOKU_LAYERMAPPING_STANDARD
#define MIRYOKU_LAYERMAPPING_MOUSE  MIRYOKU_LAYERMAPPING_STANDARD
#define MIRYOKU_LAYERMAPPING_MEDIA  MIRYOKU_LAYERMAPPING_STANDARD

// clang-format on

#endif
