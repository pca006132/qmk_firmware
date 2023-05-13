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
    { B1, B0, A7, A6, A5 }
#define MATRIX_COL_PINS \
    { B14, B15, A8, A15, B3, B4, B5 }
#define DIODE_DIRECTION COL2ROW

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN B6
#define SERIAL_USART_RX_PIN B7

// #define SERIAL_USART_SPEED 921600
#define DEBOUNCE 3
#define DEBOUNCE_TYPE = sym_eager_pk
#define USB_POLLING_INTERVAL_MS 1

#define PS2_CLOCK_PIN A4
#define PS2_DATA_PIN A3
#define PS2_INIT_DELAY 2000
// #define PS2_MOUSE_ROTATE 45
