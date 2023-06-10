// Copyright 2022 mazWaz (@mazWaz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define LED_PIN_1 GP23
#define LED_PIN_2 GP24
#define LED_PIN_3 GP25

/* Double tap the side button to enter bootloader */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP15
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#ifdef OLED_ENABLE
#    define I2C_DRIVER I2CD1
#    define I2C1_SDA_PIN GP2
#    define I2C1_SCL_PIN GP3
#    define OLED_DISPLAY_128X64
#    define OLED_TIMEOUT 300000
#endif

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLIGHT_ANIMATIONS
#    define DRIVER_LED_TOTAL 12
#    define RGBLED_NUM 12
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17

#endif
