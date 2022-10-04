/* Copyright 2021 Gigahawk
 * Modified 2021 by usrfriendly for vial-qmk
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

#define DRIVER_1_LED_TOTAL 66
#define DRIVER_2_LED_TOTAL 33
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

//enable RGB Matrix Effects for Vial
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

//Vial Keyboard UID
#define VIAL_KEYBOARD_UID {0xEC, 0xFE, 0x5D, 0x44, 0x1A, 0x9C, 0x70, 0xCC}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 10 }
#define VIAL_UNLOCK_COMBO_COLS { 3, 4 }
