/* Copyright 2021 Kyle McCreery 
 * 
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 2 of the License, or 
 * (at your option) any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public License 
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 */


#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xDC9E
#define PRODUCT_ID      0x345C
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kinesis
#define PRODUCT         "KinT Blackpill Edition"

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS        \
    {                          \
            B5,  /* ROW_EQL */ \
            B6,  /* ROW_1 */   \
            B7,  /* ROW_2 */   \
            B8,  /* ROW_3 */   \
            B4,  /* ROW_4 */   \
            A3,  /* ROW_5 */   \
            A15, /* ROW_6 */   \
            B15, /* ROW_7 */   \
            A8,  /* ROW_8 */   \
            B13, /* ROW_9 */   \
            B12, /* ROW_0 */   \
            B14, /* ROW_MIN */ \
            A4,  /* ROW_ESC */ \
            B10, /* ROW_F1 */  \
            B0   /* ROW_F2 */  \
    }

#define MATRIX_COL_PINS      \
    {                        \
            A5,  /* COL_0 */ \
            C14, /* COL_1 */ \
            C15, /* COL_2 */ \
            A7,  /* COL_3 */ \
            B1,  /* COL_4 */ \
            A6,  /* COL_5 */ \
            B3   /* COL_6 */ \
    }

#define UNUSED_PINS { C13, A13, A14 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
/* #define DEBOUNCE 5 */
/* Well-worn Cherry MX key switches can bounce for up to 20ms, despite the
 * Cherry data sheet specifying 5ms. Because we use the sym_eager_pk debounce
 * algorithm, this debounce latency only affects key releases (not key
 * presses). */
#define DEBOUNCE 20
#define IGNORE_MOD_TAP_INTERRUPT

#define LED_PIN_ON_STATE 0
#define LED_NUM_LOCK_PIN A0
#define LED_CAPS_LOCK_PIN B9
#define LED_SCROLL_LOCK_PIN A1
#define LED_COMPOSE_PIN A2
