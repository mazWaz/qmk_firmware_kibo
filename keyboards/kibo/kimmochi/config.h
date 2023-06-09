// Copyright 2022 mazWaz (@mazWaz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* direct pins */
#define DIRECT_PINS                               \
    {                                             \
        {GP29, GP28, GP27}, {GP21, GP20, GP19}, { \
            NO_PIN, GP15, NO_PIN                  \
        }                                         \
    }

/* Encoders Pin */
#define ENCODERS 1
#define ENCODERS_PAD_A \
    { GP14 }
#define ENCODERS_PAD_B \
    { GP13 }

/* LED Pin */
#define LED_PIN_1 GP23
#define LED_PIN_2 GP24
#define LED_PIN_3 GP25

/* Bootmagic lite */
/* (Press the Encoder button while plugging the keyboard to enter the bootloader) */
#define BOOTMAGIC_LITE_ROW 2
#define BOOTMAGIC_LITE_COLUMN 1

/* Double tap the side button to enter bootloader */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP15
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#ifdef OLED_ENABLE
#    define WS2812_PIO_USE_PIO1s
#    define I2C_DRIVER I2CD2
#    define I2C1_SDA_PIN GP2
#    define I2C1_SCL_PIN GP3
#    define OLED_DISPLAY_128X64
#    define OLED_TIMEOUT 300000
#endif

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLIGHT_ANIMATIONS
#    define RGB_DI_PIN GP0
#    define DRIVER_LED_TOTAL 12
#    define RGBLED_NUM 12
#    define RGBLIGHT_LIMIT_VAL 255
#    define RGBLIGHT_HUE_STEP 10
#    define RGBLIGHT_SAT_STEP 17
#    define RGBLIGHT_VAL_STEP 17

#endif

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
// #define NO_ACTION_LAYER
// #define NO_ACTION_TAPPING
// #define NO_ACTION_ONESHOT
