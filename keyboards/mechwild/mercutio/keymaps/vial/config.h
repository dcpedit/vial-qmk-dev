/*
Copyright 2021 Kyle McCreery
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* VIAL Specific definitions */
#define VIAL_KEYBOARD_UID {0xAA, 0xF4, 0xE4, 0x5D, 0xDA, 0x2E, 0x52, 0x2F}
#define VIAL_UNLOCK_COMBO_ROWS { 1, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 3 }

/* Space-saving measures */
#define LAYER_STATE_8BIT
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
