// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_TAP_QWERTY
#define MIRYOKU_EXTRA_QWERTY
#define MIRYOKU_NAV_VI

#if defined (MIRYOKU_KEYBOARD_CORNE)

#define XXX &none

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
U_PST  K10  K11  K12  K13  K00       K04  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K14       K25  K26  K27  K28  K29  &kp C_MUTE \
               K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYERMAPPING_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp ESC K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp C_VOL_UP \
U_PST  K10  K11  K12  K13  &kp LPAR       &kp RPAR  K16  K17  K18  K19  &kp C_VOL_DN \
U_CPY  K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp C_MUTE \
               K32  K33  K34       K35  K36  K37

#endif
