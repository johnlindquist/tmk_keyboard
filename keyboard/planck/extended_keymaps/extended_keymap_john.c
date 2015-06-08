#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Colemak */
    {FUNC(20),          KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           KC_J,               KC_L,           KC_U,               KC_Y,               KC_SCLN,        KC_ENT},
    {FUNC(2),           KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           KC_H,               KC_N,           KC_E,               KC_I,               KC_O,           KC_QUOT},
    {KC_BSPC,           KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_K,               KC_M,           KC_COMM,            KC_DOT,             KC_SLSH,        KC_DELETE},
    {KC_EQL,            KC_LGUI,        LGUI(KC_Z),     KC_ESC,         KC_LALT,        KC_SPC,         KC_LSFT,            FUNC(1),        KC_RCTL,            KC_RALT,            KC_RGUI,        KC_MINS}
},
[1] = { /* NUMBERS AND SYMBOLS */
    {KC_GRV,            KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,               KC_7,           KC_8,               KC_9,               KC_0,           KC_BSLASH},
    {KC_TRNS,           KC_LBRC,        KC_RBRC,        KC_QUOT,        S(KC_QUOT),     S(KC_EQL),      KC_MINS,            S(KC_LBRC),     S(KC_RBRC),         S(KC_9),            S(KC_0),        S(KC_BSLASH)},
    {KC_TRNS,           S(KC_1),        S(KC_2),        S(KC_3),        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_TRNS},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},
[2] = { /* HJKL MOVEMENT AND FN*/
    {KC_F12,            KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,              KC_F7,          KC_F8,              KC_F9,              KC_F10,         KC_F11},
    {KC_TRNS,           LALT(KC_SPC),   KC_NO,          KC_NO,          KC_NO,          KC_ESC,         KC_LEFT,            KC_DOWN,        KC_UP,              KC_RGHT,            KC_NO,          KC_NO},
    {KC_TRNS,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,            LGUI(KC_LEFT),  LGUI(KC_RGHT),      KC_DELETE,          KC_NO,          KC_TRNS},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            RESET,              KC_TRNS,        KC_TRNS}
},
[3] = { /* MACRO PARTY!!! */
    {KC_TRNS,           FUNC(11),       FUNC(12),       FUNC(13),       KC_F4,          KC_F5,          KC_F6,              KC_F7,          KC_F8,              KC_F9,              FUNC(15),       FUNC(14)},
    {KC_TRNS,           LALT(KC_SPC),   KC_NO,          KC_NO,          KC_NO,          KC_ESC,         KC_LEFT,            KC_DOWN,        KC_UP,              KC_RGHT,            KC_NO,          KC_NO},
    {KC_TRNS,           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,            KC_WH_U,        KC_WH_D,            KC_DELETE,          KC_NO,          KC_TRNS},
    {FUNC(10),          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            RESET,              KC_TRNS,        KC_TRNS}
},
};

enum macro_id {

    SMILE,
    WINK,
    FROWN,

    PASSWORD,
    LONGPASSWORD,
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),

    [11] = ACTION_MACRO(SMILE),
    [12] = ACTION_MACRO(WINK),
    [13] = ACTION_MACRO(FROWN),

    [14] = ACTION_MACRO(PASSWORD),
    [15] = ACTION_MACRO(LONGPASSWORD),

    [20] = ACTION_LAYER_TAP_KEY(3, KC_TAB),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;
    switch(id) {
        case PASSWORD:
            return event.pressed ?
             MACRO_NONE;
        case LONGPASSWORD:
            return event.pressed ?
             MACRO_NONE;
        case SMILE:
            /* :) */
            return MACRODOWN( DOWN(KC_LSFT), TYPE(KC_SCLN), TYPE(KC_0), UP(KC_LSFT), END );
        case WINK:
            /* ;) */
            return MACRODOWN( TYPE(KC_SCLN), DOWN(KC_LSFT), TYPE(KC_0), UP(KC_LSFT), END );
        case FROWN:
            /* :( */
            return MACRODOWN( DOWN(KC_LSFT), TYPE(KC_SCLN), TYPE(KC_9), UP(KC_LSFT), END );
        default:
            break;
    }
    return MACRO_NONE;
};
