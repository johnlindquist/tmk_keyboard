#include "extended_keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = { /* Colemak */
    {KC_TAB,            KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           KC_J,               KC_L,           KC_U,               KC_Y,               KC_SCLN,        KC_BSPC},
    {FUNC(1),           KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           KC_H,               KC_N,           KC_E,               KC_I,               KC_O,           KC_QUOT},
    {KC_LSFT,           KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_K,               KC_M,           KC_COMM,            KC_DOT,             KC_SLSH,        KC_RSFT},
    {FUNC(20),          KC_LCTL,        KC_LALT,        KC_LGUI,        FUNC(2),        FUNC(21),         FUNC(20),             FUNC(3),        KC_RGUI,            KC_RALT,            KC_RCTL,        KC_RGUI}
},      
[1] = { /* CAPS_LOCK */     
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LGUI(KC_LEFT),      KC_PGDN,        KC_PGUP,            LGUI(KC_RGHT),      KC_NO,          KC_BSLASH},
    {KC_TRNS,           LALT(KC_SPC),   KC_LCTL,        KC_LSFT,        KC_LALT,        KC_ESC,         KC_LEFT,            KC_DOWN,        KC_UP,              KC_RGHT,            KC_NO,          KC_NO},
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_BSPC,            KC_NO,          KC_NO,              KC_DELETE,          KC_NO,          KC_NO},
    {RESET,             KC_NO,          KC_NO,          KC_NO,          KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_NO,              KC_NO,              KC_NO,          KC_NO}
},      
[2] = { /* RAISE */     
    {S(KC_GRV),         S(KC_1),        S(KC_2),        S(KC_3),        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_NO},
    {KC_GRV,            KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,               KC_7,           KC_8,               KC_9,               KC_0,           KC_NO},
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,              KC_NO,          KC_NO,              KC_NO,              KC_NO,          KC_NO},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},      
[3] = { /* SPECIAL CHARS */     
    {S(KC_GRV),         S(KC_1),        S(KC_2),        S(KC_3),        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_NO},
    {KC_GRV,            KC_LBRC,        KC_RBRC,        S(KC_MINS),     KC_BSLASH,      KC_5,           KC_6,               S(KC_LBRC),     S(KC_RBRC),         S(KC_9),            S(KC_0),        KC_NO},
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,              S(KC_EQL),      KC_MINS,            S(KC_8),            KC_SLSH,        KC_NO},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},
[4] = { /* SPECIAL CHARS */
    {S(KC_GRV),         S(KC_1),        S(KC_2),        KC_MS_U,        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_NO},
    {KC_GRV,            KC_LBRC,        KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_5,           KC_6,               S(KC_LBRC),     S(KC_RBRC),         S(KC_9),            S(KC_0),        KC_NO},
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,              S(KC_EQL),      KC_MINS,            S(KC_8),            KC_SLSH,        KC_NO},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},
[5] = { /* CMD */
    {S(KC_GRV),         S(KC_1),        S(KC_2),        KC_MS_U,        S(KC_4),        S(KC_5),        S(KC_6),            S(KC_7),        S(KC_8),            S(KC_9),            S(KC_0),        KC_NO},
    {KC_GRV,            KC_LBRC,        KC_MS_L,        KC_MS_D,        KC_MS_R,        KC_5,           KC_6,               S(KC_LBRC),     S(KC_RBRC),         S(KC_9),            S(KC_0),        KC_NO},
    {KC_NO,             KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,              S(KC_EQL),      KC_MINS,            S(KC_8),            KC_SLSH,        KC_NO},
    {KC_TRNS,           KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            KC_TRNS,        KC_TRNS,            KC_TRNS,            KC_TRNS,        KC_TRNS}
},
[9] = { /* Qwerty */
  {KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_BSPC},
  {KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT},
  {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT},
  {BL_STEP, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,    KC_SPC,   FUNC(5),    FUNC(1),   KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT}
}
};

enum macro_id {
    ALT_TAB,
};
const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_MOMENTARY(2),
    [3] = ACTION_LAYER_MOMENTARY(3),
    [4] = ACTION_LAYER_MOMENTARY(4),
    [5] = ACTION_LAYER_MOMENTARY(5),
    /*[4] = ACTION_DEFAULT_LAYER_SET(4),*/
    [10] = ACTION_MACRO(ALT_TAB),

    [20] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_ENT),
    [21] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_SPC),
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

  // MACRODOWN only works in this function
    switch(id) {
        case ALT_TAB:
            return event.pressed ?
             MACRO_NONE:
             MACRO_NONE;


    }
    return MACRO_NONE;
};              
