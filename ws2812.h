/**
 * MIT License
 * 
 * Copyright (c) 2024 My Techno Talent
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

/** 
 * @file ws2812.h
 * 
 * @brief Constant struct and function prototypes for the ws2812 driver.
 * 
 * This contains the constants, struct and function prototypes for the ws2812 
 * driver for use with the Raspberry Pi Pico microcontroller board.
 *   
 * @author Kevin Thomas
 * @date   04/11/2024
*/

#ifndef _WS2812_H
#define _WS2812_H

#include "pico/stdlib.h"
#include "pins.h"

/**
 * @brief Structure for WS2812 LED configuration.
 *
 * This structure defines the configuration for controlling WS2812 LEDs.
 */
typedef struct {
    uint8_t pin;
} ws2812_config_t;

/**
 * @brief External declaration of WS2812 LED configuration.
 *
 * This declares an external variable `ws2812_config` of type `ws2812_config_t`,
 * which holds the configuration settings for controlling WS2812 LEDs.
 * The actual definition of this variable is expected to be provided in another 
 * source file.
 */
extern ws2812_config_t ws2812_config;

/**
 * @brief Initializes WS2812 LED control.
 *
 * This function initializes the GPIO pin specified in the provided `ws2812_config`
 * for controlling WS2812 LEDs. It sets up the GPIO pin direction for output.
 *
 * @param  ws2812_config Pointer to the configuration structure (`ws2812_config_t`)
 *                       containing the GPIO pin used for WS2812 LED control.
 * @return None
 */
void ws2812_init(ws2812_config_t *ws2812_config);

/**
 * @brief Sets a pixel on a WS2812 LED strip with the specified color.
 *
 * This function sends color data to a WS2812 LED strip using a specified GPIO pin.
 * The color data is represented by the `set_color` parameter, where each bit
 * corresponds to a color component (e.g., Red, Green, Blue).
 *
 * @param  ws2812_config Pointer to the configuration structure (`ws2812_config_t`)
 *                       containing the GPIO pin used for WS2812 LED control.
 * @param  set_color     Color value to be transmitted to the WS2812 LED.
 * @return None
 */
void ws2812_set_pixel(ws2812_config_t *ws2812_config, uint32_t set_color);

#endif /* _WS2812_H */
