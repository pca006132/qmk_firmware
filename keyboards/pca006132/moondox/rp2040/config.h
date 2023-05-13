/* Copyright 2023-2023 Chun Kit LAM <john.lck40@gmail.com>
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

#define MATRIX_ROW_PINS \
    { GP9, GP10, GP11, GP12, GP13 }
#define MATRIX_COL_PINS \
    { GP2, GP3, GP4, GP5, GP6, GP7, GP8 }
#define DIODE_DIRECTION COL2ROW

#define SPLIT_LAYER_STATE_ENABLE

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define SERIAL_USART_SPEED 921600
#define DEBOUNCE 3
#define DEBOUNCE_TYPE = sym_eager_pk
#define USB_POLLING_INTERVAL_MS 1

#define PS2_CLOCK_PIN GP15
#define PS2_DATA_PIN GP14
#define PS2_PIO_USE_PIO1
// #define PS2_MOUSE_ROTATE 45
