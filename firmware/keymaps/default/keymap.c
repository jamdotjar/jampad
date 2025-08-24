// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include "quantum_keycodes.h"
#include "report.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 1 │ 3 │ 5 │ ⏵ │
     * ├───┼───┼───┼───┤
     * │ 2 │ 4 │ 6 │[L]│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_MPLY, TG(1)),
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ C │ E │ ⏵ │
     * ├───┼───┼───┼───┤
     * │ B │ D │ F │[L]│
     * └───┴───┴───┴───┘
     */
    [1] = LAYOUT(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_TRNS, KC_TRNS),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {[0] = {ENCODER_CCW_CW(KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN)}, [1] = {ENCODER_CCW_CW(KC_BRIGHTNESS_UP, KC_BRIGHTNESS_DOWN)}};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("JAMPAD\n\n"), true);
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR(" 0 "), true);
            oled_write_P(PSTR(" Default"), false);
            break;
        case 1:
            oled_write_P(PSTR(" 1 "), true);
            oled_write_P(PSTR(" Secondary"), false);

            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    return false;
}
#endif
// bool oled_task_user(void) {
//     // Display the current layer
//     oled_write_P(PSTR("Layer: "), false);
//     switch (biton32(layer_state)) {
//         case 0:
//             oled_write_P(PSTR("Base"), false);
//             break;
//         case 1:
//             oled_write_P(PSTR("Layer 1"), false);
//             break;
//         default:
//             oled_write_P(PSTR("Undefined"), false);
//     }
//     oled_scroll_left();
//     return false;
// }
// #endif
