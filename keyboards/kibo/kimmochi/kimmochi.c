// Copyright 2021 mazWaz (@mazWaz)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "kimmochi.h"

#if defined(ENCODER_ENABLE)
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }
    if (clockwise) {
        tap_code(KC_VOLD);
    } else {
        tap_code(KC_VOLU);
    }
    return true;
}
#endif

void led_1_on(void) {
    writePin(LED_PIN_1, true);
}
void led_2_on(void) {
    writePin(LED_PIN_2, true);
}
void led_3_on(void) {
    writePin(LED_PIN_3, true);
}

void led_1_off(void) {
    writePin(LED_PIN_1, false);
}
void led_2_off(void) {
    writePin(LED_PIN_2, false);
}
void led_3_off(void) {
    writePin(LED_PIN_3, false);
}

void led_all_on(void) {
    led_1_on();
    led_2_on();
    led_3_on();
}

void led_all_off(void) {
    led_1_off();
    led_2_off();
    led_3_off();
}

void led_init_ports(void) {
    setPinOutput(LED_PIN_1);
    setPinOutput(LED_PIN_2);
    setPinOutput(LED_PIN_3);
}
