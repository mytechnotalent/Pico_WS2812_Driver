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
 * @file ws2812.c
 *
 * @brief Struct inits and functions for the ws2812 driver.
 * 
 * This contains the struct initializations and functions for the ws2812 driver 
 * for use with the Raspberry Pi Pico microcontroller board.
 *
 * @author Kevin Thomas
 * @date   04/11/2023
 */

#include "ws2812.h"

ws2812_config_t ws2812_config = {
    .pin = WS2812
};

void ws2812_init(ws2812_config_t *ws2812_config) {
    gpio_init(ws2812_config->pin);
    gpio_set_dir(ws2812_config->pin, 1);
}

void ws2812_set_pixel(ws2812_config_t *ws2812_config, uint32_t set_color) {
    uint8_t index = 0;
    uint8_t bit = 0;
    uint8_t bits = 24;

    while (bits--) {
        if (set_color & (1 << bit++)) {
            // one
            for (index = 0; index <= 10; index++)
                gpio_put(ws2812_config->pin, 1);
            for (index = 0; index <= 2; index++)
                gpio_put(ws2812_config->pin, 0);
        } else {
            // zero
            for (index = 0; index <= 3; index++)
                gpio_put(ws2812_config->pin, 1);
            for (index = 0; index <= 10; index++)
                gpio_put(ws2812_config->pin, 0);
        }
    }
}
