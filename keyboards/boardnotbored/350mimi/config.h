/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB4B
#define PRODUCT_ID      0xA350
#define DEVICE_VER      0x0002
/* in python2: list(u"whatever".encode('utf-16-le')) */
/*   at most 32 characters or the ugly hack in usb_main.c borks */
#define MANUFACTURER BoardNotBored
#define PRODUCT Mimi
#define DESCRIPTION MIMI Keyboard

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_COL_PINS { B5, B8, B9, B3, A15, A4, A8, B15, B14, B13, A3, B10, A2, B0, A5}
#define MATRIX_ROW_PINS { B1, A6, B2, B11, B12,}
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLIGHT_ANIMATIONS
#define RGB_DI_PIN A7
#define RGBLED_NUM 14
// #define WS2812_SPI SPID2
//#define WS2812_SPI_MOSI_PAL_MODE 5

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 3071 // this lets you use more of the 8kb of eeprom availible on the STM32F072CBT6. (3kB here)
#define DYNAMIC_KEYMAP_LAYER_COUNT 8
#define VIAL_KEYBOARD_UID {0x89, 0x4B, 0x8C, 0x23, 0xB0, 0x0C, 0x61, 0x1B}
