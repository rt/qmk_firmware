#include QMK_KEYBOARD_H
#include "ryan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base (qwerty)
 * ,----------------------------------,                             ,----------------------------------,
 * |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |
 * |------+------+------+------+------|                             |-------------+------+------+------|
 * |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |
 * |------+------+------+------+------|                             |------|------+------+------+------|
 * |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   '  |
 * |------+------+------+-------------,                             ,-------------+------+------+------,
 *        |  [   |   ]  |                                                         |   -  |   =  |
 *        '------+------'-------------'                             '-------------'------+------'
 *                      | ESC  |  BS  |                             | SPACE|ENTER |
 *                      |  +   |   +  |                             |  +   |  +   |
 *                      | SHIFT| CTRL |                             | ALT  |SHIFT |
 *                      '------+------'                             '------+------'
 *                                    '------+------' '------+------'
 *                                    | TAB  | HOME | | END  | DEL  |
 *                                    '------+------' '------+------'
 *                                    | Lower|  ~   | | GUI  | Raise|
 *                                    '------+------' '------+------'
 */
[_QWERTY] =  LAYOUT( \
  QWER_L01, QWER_L02, QWER_L03, QWER_L04, QWER_L05, QWER_R00, QWER_R01, QWER_R02, QWER_R03, QWER_R04,  \
  QWER_L11, QWER_L12, QWER_L13, QWER_L14, QWER_L15, QWER_R10, QWER_R11, QWER_R12, QWER_R13, QWER_R14,  \
  QWER_L21, QWER_L22, QWER_L23, QWER_L24, QWER_L25, QWER_R20, QWER_R21, QWER_R22, QWER_R23, QWER_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      QWER_L34, QWER_L35,  QWER_R30, QWER_R31,                                          \
                                      QWER_L33,  XXXXXXX,   XXXXXXX,  QWER_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_COLE] =  LAYOUT( \
  COLE_L01, COLE_L02, COLE_L03, COLE_L04, COLE_L05, COLE_R00, COLE_R01, COLE_R02, COLE_R03, COLE_R04,  \
  COLE_L11, COLE_L12, COLE_L13, COLE_L14, COLE_L15, COLE_R10, COLE_R11, COLE_R12, COLE_R13, COLE_R14,  \
  COLE_L21, COLE_L22, COLE_L23, COLE_L24, COLE_L25, COLE_R20, COLE_R21, COLE_R22, COLE_R23, COLE_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      COLE_L34, COLE_L35,  COLE_R30, COLE_R31,                                          \
                                      COLE_L33,  XXXXXXX,   XXXXXXX,  COLE_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_RAISE] =  LAYOUT( \
  RAIS_L01, RAIS_L02, RAIS_L03, RAIS_L04, RAIS_L05, RAIS_R00, RAIS_R01, RAIS_R02, RAIS_R03, RAIS_R04,  \
  RAIS_L11, RAIS_L12, RAIS_L13, RAIS_L14, RAIS_L15, RAIS_R10, RAIS_R11, RAIS_R12, RAIS_R13, RAIS_R14,  \
  RAIS_L21, RAIS_L22, RAIS_L23, RAIS_L24, RAIS_L25, RAIS_R20, RAIS_R21, RAIS_R22, RAIS_R23, RAIS_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      RAIS_L34, RAIS_L35,  RAIS_R30, RAIS_R31,                                          \
                                      RAIS_L33,  XXXXXXX,   XXXXXXX,  RAIS_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_LOWER] =  LAYOUT( \
  LOW_L01, LOW_L02, LOW_L03, LOW_L04, LOW_L05, LOW_R00, LOW_R01, LOW_R02, LOW_R03, LOW_R04,  \
  LOW_L11, LOW_L12, LOW_L13, LOW_L14, LOW_L15, LOW_R10, LOW_R11, LOW_R12, LOW_R13, LOW_R14,  \
  LOW_L21, LOW_L22, LOW_L23, LOW_L24, LOW_L25, LOW_R20, LOW_R21, LOW_R22, LOW_R23, LOW_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      LOW_L34, LOW_L35,  LOW_R30, LOW_R31,                                          \
                                      LOW_L33,  XXXXXXX,   XXXXXXX,  LOW_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_ADJUST] =  LAYOUT( \
  ADJ_L01, ADJ_L02, ADJ_L03, ADJ_L04, ADJ_L05, ADJ_R00, ADJ_R01, ADJ_R02, ADJ_R03, ADJ_R04,  \
  ADJ_L11, ADJ_L12, ADJ_L13, ADJ_L14, ADJ_L15, ADJ_R10, ADJ_R11, ADJ_R12, ADJ_R13, ADJ_R14,  \
  ADJ_L21, ADJ_L22, ADJ_L23, ADJ_L24, ADJ_L25, ADJ_R20, ADJ_R21, ADJ_R22, ADJ_R23, ADJ_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      ADJ_L34, ADJ_L35,  ADJ_R30, ADJ_R31,                                          \
                                      ADJ_L33,  XXXXXXX,   XXXXXXX,  ADJ_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_NAV] =  LAYOUT( \
  NAV_L01, NAV_L02, NAV_L03, NAV_L04, NAV_L05, NAV_R00, NAV_R01, NAV_R02, NAV_R03, NAV_R04,  \
  NAV_L11, NAV_L12, NAV_L13, NAV_L14, NAV_L15, NAV_R10, NAV_R11, NAV_R12, NAV_R13, NAV_R14,  \
  NAV_L21, NAV_L22, NAV_L23, NAV_L24, NAV_L25, NAV_R20, NAV_R21, NAV_R22, NAV_R23, NAV_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      NAV_L34, NAV_L35,  NAV_R30, NAV_R31,                                          \
                                      NAV_L33,  XXXXXXX,   XXXXXXX,  NAV_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_GIT] =  LAYOUT( \
  GIT_L01, GIT_L02, GIT_L03, GIT_L04, GIT_L05, GIT_R00, GIT_R01, GIT_R02, GIT_R03, GIT_R04,  \
  GIT_L11, GIT_L12, GIT_L13, GIT_L14, GIT_L15, GIT_R10, GIT_R11, GIT_R12, GIT_R13, GIT_R14,  \
  GIT_L21, GIT_L22, GIT_L23, GIT_L24, GIT_L25, GIT_R20, GIT_R21, GIT_R22, GIT_R23, GIT_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      GIT_L34, GIT_L35,  GIT_R30, GIT_R31,                                          \
                                      GIT_L33,  XXXXXXX,   XXXXXXX,  GIT_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_NUM] =  LAYOUT( \
  SFT_L01, SFT_L02, SFT_L03, SFT_L04, SFT_L05, SFT_R00, SFT_R01, SFT_R02, SFT_R03, SFT_R04,  \
  SFT_L11, SFT_L12, SFT_L13, SFT_L14, SFT_L15, SFT_R10, SFT_R11, SFT_R12, SFT_R13, SFT_R14,  \
  SFT_L21, SFT_L22, SFT_L23, SFT_L24, SFT_L25, SFT_R20, SFT_R21, SFT_R22, SFT_R23, SFT_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      SFT_L34, SFT_L35,  SFT_R30, SFT_R31,                                          \
                                      SFT_L33,  XXXXXXX,   XXXXXXX,  SFT_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_VHOME] =  LAYOUT( \
  VHOME_L01, VHOME_L02, VHOME_L03, VHOME_L04, VHOME_L05, VHOME_R00, VHOME_R01, VHOME_R02, VHOME_R03, VHOME_R04,  \
  VHOME_L11, VHOME_L12, VHOME_L13, VHOME_L14, VHOME_L15, VHOME_R10, VHOME_R11, VHOME_R12, VHOME_R13, VHOME_R14,  \
  VHOME_L21, VHOME_L22, VHOME_L23, VHOME_L24, VHOME_L25, VHOME_R20, VHOME_R21, VHOME_R22, VHOME_R23, VHOME_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      VHOME_L34, VHOME_L35,  VHOME_R30, VHOME_R31,                                          \
                                      VHOME_L33,  XXXXXXX,   XXXXXXX,  VHOME_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_VHNAV] =  LAYOUT( \
  VHNAV_L01, VHNAV_L02, VHNAV_L03, VHNAV_L04, VHNAV_L05, VHNAV_R00, VHNAV_R01, VHNAV_R02, VHNAV_R03, VHNAV_R04,  \
  VHNAV_L11, VHNAV_L12, VHNAV_L13, VHNAV_L14, VHNAV_L15, VHNAV_R10, VHNAV_R11, VHNAV_R12, VHNAV_R13, VHNAV_R14,  \
  VHNAV_L21, VHNAV_L22, VHNAV_L23, VHNAV_L24, VHNAV_L25, VHNAV_R20, VHNAV_R21, VHNAV_R22, VHNAV_R23, VHNAV_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      VHNAV_L34, VHNAV_L35,  VHNAV_R30, VHNAV_R31,                                          \
                                      VHNAV_L33,  XXXXXXX,   XXXXXXX,  VHNAV_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_VWORK] =  LAYOUT( \
  VWORK_L01, VWORK_L02, VWORK_L03, VWORK_L04, VWORK_L05, VWORK_R00, VWORK_R01, VWORK_R02, VWORK_R03, VWORK_R04,  \
  VWORK_L11, VWORK_L12, VWORK_L13, VWORK_L14, VWORK_L15, VWORK_R10, VWORK_R11, VWORK_R12, VWORK_R13, VWORK_R14,  \
  VWORK_L21, VWORK_L22, VWORK_L23, VWORK_L24, VWORK_L25, VWORK_R20, VWORK_R21, VWORK_R22, VWORK_R23, VWORK_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      VWORK_L34, VWORK_L35,  VWORK_R30, VWORK_R31,                                          \
                                      VWORK_L33,  XXXXXXX,   XXXXXXX,  VWORK_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_VWNAV] =  LAYOUT( \
  VWNAV_L01, VWNAV_L02, VWNAV_L03, VWNAV_L04, VWNAV_L05, VWNAV_R00, VWNAV_R01, VWNAV_R02, VWNAV_R03, VWNAV_R04,  \
  VWNAV_L11, VWNAV_L12, VWNAV_L13, VWNAV_L14, VWNAV_L15, VWNAV_R10, VWNAV_R11, VWNAV_R12, VWNAV_R13, VWNAV_R14,  \
  VWNAV_L21, VWNAV_L22, VWNAV_L23, VWNAV_L24, VWNAV_L25, VWNAV_R20, VWNAV_R21, VWNAV_R22, VWNAV_R23, VWNAV_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      VWNAV_L34, VWNAV_L35,  VWNAV_R30, VWNAV_R31,                                          \
                                      VWNAV_L33,  XXXXXXX,   XXXXXXX,  VWNAV_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_INAV] =  LAYOUT( \
  INAV_L01, INAV_L02, INAV_L03, INAV_L04, INAV_L05, INAV_R00, INAV_R01, INAV_R02, INAV_R03, INAV_R04,  \
  INAV_L11, INAV_L12, INAV_L13, INAV_L14, INAV_L15, INAV_R10, INAV_R11, INAV_R12, INAV_R13, INAV_R14,  \
  INAV_L21, INAV_L22, INAV_L23, INAV_L24, INAV_L25, INAV_R20, INAV_R21, INAV_R22, INAV_R23, INAV_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      INAV_L34, INAV_L35,  INAV_R30, INAV_R31,                                          \
                                      INAV_L33,  XXXXXXX,   XXXXXXX,  INAV_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_CHROME] =  LAYOUT( \
  CHROME_L01, CHROME_L02, CHROME_L03, CHROME_L04, CHROME_L05, CHROME_R00, CHROME_R01, CHROME_R02, CHROME_R03, CHROME_R04,  \
  CHROME_L11, CHROME_L12, CHROME_L13, CHROME_L14, CHROME_L15, CHROME_R10, CHROME_R11, CHROME_R12, CHROME_R13, CHROME_R14,  \
  CHROME_L21, CHROME_L22, CHROME_L23, CHROME_L24, CHROME_L25, CHROME_R20, CHROME_R21, CHROME_R22, CHROME_R23, CHROME_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      CHROME_L34, CHROME_L35,  CHROME_R30, CHROME_R31,                                          \
                                      CHROME_L33,  XXXXXXX,   XXXXXXX,  CHROME_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
[_IDEA] =  LAYOUT( \
  IDEA_L01, IDEA_L02, IDEA_L03, IDEA_L04, IDEA_L05, IDEA_R00, IDEA_R01, IDEA_R02, IDEA_R03, IDEA_R04,  \
  IDEA_L11, IDEA_L12, IDEA_L13, IDEA_L14, IDEA_L15, IDEA_R10, IDEA_R11, IDEA_R12, IDEA_R13, IDEA_R14,  \
  IDEA_L21, IDEA_L22, IDEA_L23, IDEA_L24, IDEA_L25, IDEA_R20, IDEA_R21, IDEA_R22, IDEA_R23, IDEA_R24,  \
              XXXXXXX, XXXXXXX,                                                   XXXXXXX, XXXXXXX,    \
                                      IDEA_L34, IDEA_L35,  IDEA_R30, IDEA_R31,                                          \
                                      IDEA_L33,  XXXXXXX,   XXXXXXX,  IDEA_R32,                                           \
                                      XXXXXXX,   XXXXXXX,    XXXXXXX, XXXXXXX
),
};

