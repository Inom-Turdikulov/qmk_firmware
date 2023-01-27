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
    [_LAYER0] = LAYOUT(KC_ESC,           KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,
                       KC_GRV,           KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC, KC_DEL,
                       KC_TAB,           KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_VOLU,
                       KC_LCTL,          KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,                    KC_VOLD,
                       KC_LSPO, KC_LSPO, KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_RSPC, KC_RSPC,                   KC_MPLY,
                       KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC,                    MO(1), KC_RGUI, KC_RCTL, KC_APP, TG(2),                    KC_MUTE),

    // Function layer
    [_LAYER1] = LAYOUT(RGB_TOG, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS, KC_NO, RGB_SPI, RGB_SPD, KC_TRNS,
                       KC_TRNS, KC_NO, KC_NO, KC_NO, KC_END, KC_NO, KC_HOME, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD,
                       KC_TRNS, KC_TRNS, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_DOWN, KC_RGHT, KC_PGUP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV,
                       KC_TRNS, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_NO, KC_NO, KC_UP, KC_LEFT, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MRWD,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MFFD),

    // Gaming layer
    [_LAYER2] = LAYOUT(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SCRL, KC_PAUS,
                       KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_BSPC, KC_NO,
                       KC_TAB, KC_Q, KC_UP, KC_E, KC_M, KC_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,
                       KC_LCTL, KC_LEFT, KC_DOWN, KC_RGHT, KC_I, KC_G, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_QUOT, KC_ENT, KC_NO,
                       KC_LSFT, KC_LSFT, KC_Z, KC_X, KC_C, KC_K, KC_B, KC_NO, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT, KC_NO,
                       KC_LCTL, KC_NO, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, KC_NO, KC_APP, KC_RCTL, KC_TRNS, KC_NO),
};
