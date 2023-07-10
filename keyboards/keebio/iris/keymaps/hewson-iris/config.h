/*
Copyright 2022 Danny Nguyen <danny@keeb.io>

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

#define SPLIT_HAND_PIN D5

#define TAPPING_TERM 180

// Enable rapid switch from tap qtto hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0
//#define PERMISSIVE_HOLD

#define MOUSEKEY_DELAY 7
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MAX_SPEED 10
#define MOUSEKEY_TIME_TO_MAX 40
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_INTERVAL 30

#define TAPPING_TOGGLE 3
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT 200

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
