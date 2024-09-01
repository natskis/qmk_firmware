/*
Copyright 2021 @mangoiv

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

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 30000
#endif

#define EE_HANDS

#define LAYER_STATE_8BIT

// #define ENCODER_A_PINS { B2 }
// #define ENCODER_B_PINS { B3 }
#define ENCODER_A_PINS_RIGHT { B2, B6 }
// #define ENCODER_B_PINS_RIGHT { B2, B6 }
#define ENCODER_RESOLUTIONS_RIGHT { 2, 4 }

                    // {"pin_a": "B2", "pin_b": "B6", "resolution": 4},
                    // {"pin_a": "B4", "pin_b": "B5", "resolution": 1}