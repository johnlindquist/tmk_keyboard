#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Colemak */
    {KC_TAB,            KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           KC_J,               KC_L,           KC_U,               KC_Y,               KC_SCLN,        KC_ENT},
    {FUNC(2),           KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           KC_H,               KC_N,           KC_E,               KC_I,               KC_O,           KC_QUOT},
    {KC_BSPC,           KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_K,               KC_M,           KC_COMM,            KC_DOT,             KC_SLSH,        KC_DELETE},
    {LGUI(KC_Z),        KC_LGUI,        KC_LALT,        FUNC(10),       KC_LALT,        KC_SPC,         KC_LSFT,            FUNC(1),        KC_RCTL,            KC_RALT,            KC_RGUI,        KC_MINS}
},   
[1] = { /* NUMBERS AND SYMBOLS */         
    {KC_GRV,            KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,               KC_7,           KC_8,               KC_9,               KC_0,           KC_BSLASH},
    {KC_TRNS,           KC_LBRC,        KC_RBRC,        KC_QUOT,        S(KC_QUOT),     S(KC_EQL),      KC_MINS,            S(KC_LBRC),     S(KC_RBRC),         S(KC_9),            S(KC_0),        KC_NO},
    {S(KC_GRV),         S(KC_1),        S(KC_2),        S(KC_3),        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_TRNS},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},      
[2] = { /* HJKL MOVEMENT AND FN*/     
    {KC_F12,            KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,              KC_F7,          KC_F8,              KC_F9,              KC_F10,         KC_F11},
    {KC_TRNS,           LALT(KC_SPC),   KC_NO,          KC_NO,          KC_NO,          KC_ESC,         KC_LEFT,            KC_DOWN,        KC_UP,              KC_RGHT,            KC_NO,          KC_NO},
    {KC_TRNS,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,            KC_WH_U,        KC_WH_D,            KC_DELETE,          KC_NO,          KC_TRNS},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            RESET,              KC_TRNS,        KC_TRNS}
},
};

enum macro_id {
    ASSIGN,
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    
    [10] = ACTION_MACRO(ASSIGN),

    [20] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_B),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

  // MACRODOWN only works in this function
    switch(id) {
        case ASSIGN:
            return event.pressed ?
             MACRO_NONE:
             MACRO(T(SPC), T(EQL), T(SPC), END);
    }
    return MACRO_NONE;
};              
