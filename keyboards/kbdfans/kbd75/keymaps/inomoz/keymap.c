#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8
#define _LAYER9 9
#define _LAYER10 10
#define _LAYER11 11
#define _LAYER12 12

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
    LAYER7,
    LAYER8,
    LAYER9,
    LAYER10,
    LAYER11,
    LAYER12,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Main layer
    //                    1       2           3           4              5           6            7         8             9           10          11          12          13               14       15       16
    [_LAYER0] = LAYOUT(KC_ESC,  KC_F1,      KC_F2,      KC_F3,         KC_F4,      KC_F5,       KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,          KC_PSCR, KC_SCRL, KC_PAUS,
                       KC_GRV,  KC_1,       KC_2,       KC_3,          KC_4,       KC_5,        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,          KC_BSPC, KC_BSPC, KC_DEL,
                       KC_TAB,  KC_Q,       KC_W,       KC_E,          KC_R,       KC_T,        KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,    KC_RBRC,         KC_BSLS, KC_VOLU,
                       KC_LCTL, KC_A,       KC_S,       KC_D,          KC_F,       KC_G,        KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,    RCTL_T(KC_ENT),  KC_VOLD,
                       SC_LSPO, SC_LSPO,    KC_Z,       KC_X,          KC_C,       KC_V,        KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    SC_RSPC,         SC_RSPC, KC_MPLY,
                       KC_APP,  KC_LGUI,    KC_LALT,    KC_SPC,        KC_SPC,     KC_SPC,      MO(2),      KC_RCTL,    KC_LALT,    KC_F13,      KC_PGUP,      KC_PGDN),

    //                    1       2           3           4              5           6            7         8             9           10          11          12          13               14       15       16
    [_LAYER1] = LAYOUT(KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,
                       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,
                       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_F,          KC_P,       KC_B,        KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS,
                       KC_TRNS, KC_TRNS,    KC_R,       KC_S,          KC_T,       KC_G,        KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_TRNS,    KC_TRNS,         KC_TRNS,
                       KC_TRNS, KC_TRNS,    KC_X,       KC_C,          KC_D,       KC_V,        KC_Z,       KC_K,       KC_H,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS,
                       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,       KC_TRNS,    KC_TRNS,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    TG(0)),

    // Function layer 1
    //                    1        2           3           4              5           6           7           8           9           10         11          12          13                14       15      16
    [_LAYER2] = LAYOUT(RGB_TOG, KC_P1,      KC_P2,      KC_P3,         KC_P4,      KC_P5,       KC_P6,      KC_P7,      KC_P8,      KC_P9,      KC_P0,      KC_PAST,    KC_PPLS,         RGB_SPI, RGB_SPD, KC_TRNS,
                       KC_TRNS, RGUI(KC_1), LGUI(KC_2), LGUI(KC_3),    LGUI(KC_4), LGUI(KC_5),  LGUI(KC_6), LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), LGUI(KC_0), KC_PMNS,    KC_PEQL,         KC_DEL,  RGB_VAD, KC_TRNS,
                       KC_PGUP, KC_HOME,    KC_BTN1,    KC_UP,         KC_BTN2,    KC_TRNS,     LCTL(KC_C), KC_WH_U,    KC_BTN1,    KC_MS_U,    KC_BTN3,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_MPRV,
                       KC_PGDN, KC_END,     KC_LEFT,    KC_DOWN,       KC_RIGHT,   KC_TRNS,     KC_TRNS,    KC_WH_D,    KC_MS_L,    KC_MS_D,    KC_MS_R,    KC_TRNS,    KC_TRNS,         KC_MNXT,
                       KC_INS,  KC_TRNS,    KC_TRNS,    LCTL(KC_X),    KC_PGDN,    KC_TRNS,     KC_NO,      KC_TRNS,    KC_TRNS,    KC_PCMM,    KC_PDOT,    KC_PSLS,    KC_TRNS,         KC_TRNS, KC_MRWD,
                       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_F14,        KC_F14,     KC_F14,     KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    TG(1)),
};

// Initialize variable holding the binary
// representation of active modifiers.
// https://docs.qmk.fm/#/feature_advanced_keycodes?id=key-overrides
// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_key_overrides.md
const key_override_t vim_escape_map = ko_make_basic(MOD_MASK_CTRL, KC_LBRC, KC_ESC);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &vim_escape_map,
    NULL // Null terminate the array of overrides!
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _LAYER1:
            rgblight_enable();
            break;
        default: // for any other layers, or the default layer
            rgblight_disable();
            break;
    }
  return state;
}
