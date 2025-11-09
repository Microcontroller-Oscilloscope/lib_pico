/*
	pins.h - pin configuration for Raspberry Pi Pico
	Copyright (C) 2025 Camren Chraplak

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef PINS_H
#define PINS_H

#include <boards/board_common.h>

#if SUPPORTED_PICO
	#include "board_pico_pins.h"
#endif

// LED
#ifndef INTERNAL_LED
	#define INTERNAL_LED LED_BUILTIN
#endif
#ifndef LED_COUNT
	#define LED_COUNT 1
#endif
#ifndef EXTERNAL_LED_PIN
	#define EXTERNAL_STATUS_LED_PIN D22 // pin for external status LED
#endif
#ifndef STATUS_LED_PIN
	#if SUPPORTED_PICO_W
		#define STATUS_LED_PIN CYW43_WL_GPIO_LED_PIN // pin for status LED
	#elif SUPPORTED_PICO_NO_W
		#define STATUS_LED_PIN 25 // pin for status LED
	#endif
#endif

#endif