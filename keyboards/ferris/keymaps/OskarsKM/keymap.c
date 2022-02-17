#include "keymap_swedish.h"
#include QMK_KEYBOARD_H

enum sweep_layers{
    _base,
    _symbols,
    _sym2,
    _top,
    _gaming
};

void keyboard_post_init_user(void) {
    if (!host_keyboard_led_state().num_lock) {
        tap_code(KC_NUMLOCK);
    }
};

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT( KC_Q        , KC_W        , KC_F        , KC_P        , KC_B     ,            KC_J       , KC_L        , KC_U         , KC_Y         , _______     ,
                      LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G     ,            KC_M       , RSFT_T(KC_N), RCTL_T(KC_E) , RALT_T(KC_I) , RGUI_T(KC_O),
                      KC_Z        , KC_X        , KC_C        , KC_D        , KC_V     ,            KC_K       , KC_H        , KC_COMMA     , KC_DOT       , MO(_top)    , 
                                                                KC_ENT      , KC_BSPC  ,            KC_SPACE   , MO(_symbols)),

        [1] = LAYOUT( SE_EXLM     , SE_AT       , SE_LCBR     ,SE_RCBR      , SE_PIPE  ,            SE_MINS    , KC_7        , KC_8     , KC_9     , SE_SLSH     ,
                      SE_QUES     , SE_HASH     , SE_LPRN     ,SE_RPRN      , SE_DQUO  ,            SE_PLUS    , KC_4        , KC_5     , KC_6     , KC_0        ,
                      SE_LABK     , SE_RABK     , SE_LBRC     ,SE_RBRC      , SE_AMPR  ,            SE_ASTR    , KC_1        , KC_2     , KC_3     , SE_EQL      , 
                                                                MO(_sym2)   , KC_TAB   ,            KC_ESC     , _______     ),

        [2] = LAYOUT(  _______    , SE_SECT     , _______     , SE_CIRC     , SE_GRV   ,            SE_UNDS    , KC_PGUP     , _______     , _______     , SE_BSLS     ,
                       KC_SPACE    , SE_PERC     , _______     , _______     , SE_QUOT  ,            _______    , KC_HOME     , KC_END      , _______     , _______     ,
                       _______    , SE_PND      , SE_DLR      , SE_EURO     , SE_ACUT  ,            _______    , KC_PGDN     , _______     , _______     , SE_TILD     , 
                                                                _______     , _______  ,            KC_DEL     , _______     ),

        [3] = LAYOUT( KC_F1       , KC_F2       , KC_F3       , KC_F4       , _______  ,            _______    , SE_ARNG     , _______     , KC_PSCR     , C(A(KC_DEL)),
                      KC_F5       , KC_F6       , KC_F7       , KC_F8       , KC_TAB   ,            SE_ODIA    , SE_ADIA     , KC_UP       , _______     , TG(_gaming)     ,
                      KC_F9       , KC_F10      , KC_F11      , KC_F12      , _______  ,            KC_MPLY    , KC_LEFT     , KC_DOWN     , KC_RIGHT    , _______     , 
                                                                KC_LALT     , KC_LSFT  ,            KC_MPRV    , KC_MNXT    ),

        [4] = LAYOUT(  KC_TAB     , KC_Q        , KC_W        , KC_E        , KC_R     ,            _______    , _______     , _______     , _______     , _______     ,
                       KC_LSFT    , KC_A        , KC_S        , KC_D        , KC_F     ,            _______    , _______     , _______     , _______     , TG(_gaming)     ,
                       KC_LCTL    , KC_Z        , KC_X        , KC_C        , KC_G     ,            _______    , _______     , _______     , _______     , _______     , 
                                                                KC_NO       , KC_SPACE ,            _______    , _______    ),

        [5] = LAYOUT(  _______    , _______     , _______     , _______     , _______  ,            _______    , _______     , _______     , _______     , _______     ,
                       _______    , _______     , _______     , _______     , _______  ,            _______    , _______     , _______     , _______     , _______     ,
                       _______    , _______     , _______     , _______     , _______  ,            _______    , _______     , _______     , _______     , _______     , 
                                                                _______     , _______  ,            _______    , _______     ) 
};