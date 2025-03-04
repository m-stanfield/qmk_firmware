#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};
// Define the mod-tap keys for the home row
#define HOME_A LGUI_T(KC_A) // A acts as GUI (Cmd/Win) when held
#define HOME_S LALT_T(KC_S) // S acts as Alt when held
#define HOME_D LSFT_T(KC_D) // D acts as Shift when held
#define HOME_F LCTL_T(KC_F) // F acts as Ctrl when held

#define HOME_J RCTL_T(KC_J)       // J acts as Ctrl when held
#define HOME_K RSFT_T(KC_K)       // K acts as Shift when held
#define HOME_L RALT_T(KC_L)       // L acts as Alt when held
#define HOME_SCLN RGUI_T(KC_SCLN) // ; acts as GUI (Cmd/Win) when held

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT(KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_NO,   KC_NO,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_NO,
                       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSLS,
                       KC_CAPS, HOME_A,  HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_LPRN, KC_RPRN, KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
                       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_SPC,  KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
                       KC_NO,   KC_LGUI, KC_LALT, KC_LGUI, KC_ESC,  MO(1),   KC_DEL,  KC_BSPC, KC_SPC,  KC_ENT,  KC_NO,   KC_NO,   TG(2),     KC_NO),

    [_LAYER1] = LAYOUT(KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS,   KC_EQL,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS),

    [_LAYER2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_J,    KC_K,    KC_L,    KC_SCLN,   KC_TRNS,
                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,
                       KC_NO,   KC_LGUI, KC_LALT, KC_LGUI, KC_ESC,  KC_SPC,   KC_DEL,  KC_BSPC, KC_SPC,  KC_ENT,  KC_NO,   KC_NO,  TG(2),   KC_TRNS)

};
