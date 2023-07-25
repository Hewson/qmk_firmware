/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */
//#define MASTER_LEFT
//#define MASTER_RIGHT
//#define SPLIT_USB_DETECT
//#define EE_HANDS

#define SPLIT_HAND_PIN D5

#define TAPPING_TERM 170

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
#define COMBO_TERM 35
#undef PERMISSIVE_HOLD

#define MOUSEKEY_DELAY 7
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_INTERVAL 30

#define TAPPING_TOGGLE 3
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT 150

//Save space
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define LAYER_STATE_8BIT
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
