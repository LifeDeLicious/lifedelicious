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

#define USE_MATRIX_I2C // needs to be redefined?

#define USE_I2C



//* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//* #define SSD1306OLED  */



#define SPLIT_USB_DETECT
// helps detect which side is master slave, if operation times out the side is slave
#define SPLIT_USB_TIMEOUT 2000
// sets maximum timeout when detecting ^
#define SPLIT_USB_TIMEOUT_POLL 10
// sets poll frequency when detecting master/slave with ^^

#define MATRIX_ROW_PINS_LEFT { D4, C6, D7, B5 }
#define MATRIX_COL_PINS_LEFT { B3, B1, B2, B6, B4, E6 }
#define MATRIX_ROW_PINS_RIGHT { B4, D7, D4, C6, B3, B1 }
#define MATRIX_COL_PINS_RIGHT { B6, B2, E6, B5 }

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 100

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
