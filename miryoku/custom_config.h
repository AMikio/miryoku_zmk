// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_VI

#if defined (MIRYOKU_KEYBOARD_CORNE)

#define XXX &none

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp bspc_del,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp C_VOL_UP \
U_PST  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp C_MUTE \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_NUM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC K00  K01  K02  K03  K24       K05  K06  K07  K08  K09  &kp C_VOL_UP \
U_PST  K10  K11  K12  K13  K00       K04  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K14       K25  K26  K27  K28  K29  &kp C_MUTE \
               K33  K32  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC K00  K01  K02  K03  K24       K05  K06  K07  K08  K09  &kp C_VOL_UP \
U_PST  K10  K11  K12  K13  K32       K33  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K14       K25  K26  K27  K28  K29  &kp C_MUTE \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp C_VOL_UP \
U_PST  K10  K11  K12  K13  &kp LBRC       &kp RBRC  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp C_MUTE \
               K32  K33  K34       K35  K36  K37

#endif
