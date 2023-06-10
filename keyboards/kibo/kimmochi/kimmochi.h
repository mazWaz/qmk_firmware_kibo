
#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

extern void led_1_on(void);
extern void led_2_on(void);
extern void led_3_on(void);

extern void led_1_off(void);
extern void led_2_off(void);
extern void led_3_off(void);

extern void led_all_on(void);

extern void led_all_off(void);
