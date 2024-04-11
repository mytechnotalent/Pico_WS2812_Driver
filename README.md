<img src="https://github.com/mytechnotalent/Pico_WS2812_Driver/blob/main/Pico_WS2812_Driver.png?raw=true">

## FREE Reverse Engineering Self-Study Course [HERE](https://github.com/mytechnotalent/Reverse-Engineering-Tutorial)

<br>

# Pico WS2812 Driver
A Raspberry Pi Pico WS2812 NeoPixel driver written entirely in C.

<br>

# Code
```c
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
 * @file main.c
 *
 * @brief Main file to demonstrate the ws2812 driver.
 * 
 * This contains the main file to demonstrate the ws2812 driver for use with the 
 * Raspberry Pi Pico microcontroller board.
 *
 * @author Kevin Thomas
 * @date   04/11/2023
 */

#include "pico/stdlib.h"
#include "ws2812.h"

int main(void) {
    const uint8_t DELAY = 70;

    ws2812_init(&ws2812_config);

    while (1) {
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000010000000); // green 1
        ws2812_set_pixel(&ws2812_config, 0b000000001000000000000000); // red 1
        ws2812_set_pixel(&ws2812_config, 0b100000000000000000000000); // blue 1
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011000000); // green 2
        ws2812_set_pixel(&ws2812_config, 0b000000001100000000000000); // red 2
        ws2812_set_pixel(&ws2812_config, 0b110000000000000000000000); // blue 2
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011100000); // green 3
        ws2812_set_pixel(&ws2812_config, 0b000000001110000000000000); // red 3
        ws2812_set_pixel(&ws2812_config, 0b111000000000000000000000); // blue 3
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011110000); // green 4
        ws2812_set_pixel(&ws2812_config, 0b000000001111000000000000); // red 4
        ws2812_set_pixel(&ws2812_config, 0b111100000000000000000000); // blue 4
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111000); // green 5
        ws2812_set_pixel(&ws2812_config, 0b000000001111100000000000); // red 5
        ws2812_set_pixel(&ws2812_config, 0b111110000000000000000000); // blue 5
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111100); // green 6
        ws2812_set_pixel(&ws2812_config, 0b000000001111110000000000); // red 6
        ws2812_set_pixel(&ws2812_config, 0b111111000000000000000000); // blue 6
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111110); // green 7
        ws2812_set_pixel(&ws2812_config, 0b000000001111111000000000); // red 7
        ws2812_set_pixel(&ws2812_config, 0b111111100000000000000000); // blue 7
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111111); // green 8
        ws2812_set_pixel(&ws2812_config, 0b000000001111111100000000); // red 8
        ws2812_set_pixel(&ws2812_config, 0b111111110000000000000000); // blue 8
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111110); // green 7
        ws2812_set_pixel(&ws2812_config, 0b000000001111111000000000); // red 7
        ws2812_set_pixel(&ws2812_config, 0b111111100000000000000000); // blue 7
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111100); // green 6
        ws2812_set_pixel(&ws2812_config, 0b000000001111110000000000); // red 6
        ws2812_set_pixel(&ws2812_config, 0b111111000000000000000000); // blue 6
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011111000); // green 5
        ws2812_set_pixel(&ws2812_config, 0b000000001111100000000000); // red 5
        ws2812_set_pixel(&ws2812_config, 0b111110000000000000000000); // blue 5
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011110000); // green 4
        ws2812_set_pixel(&ws2812_config, 0b000000001111000000000000); // red 4
        ws2812_set_pixel(&ws2812_config, 0b111100000000000000000000); // blue 4
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011100000); // green 3
        ws2812_set_pixel(&ws2812_config, 0b000000001110000000000000); // red 3
        ws2812_set_pixel(&ws2812_config, 0b111000000000000000000000); // blue 3
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000011000000); // green 2
        ws2812_set_pixel(&ws2812_config, 0b000000001100000000000000); // red 2
        ws2812_set_pixel(&ws2812_config, 0b110000000000000000000000); // blue 2
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000010000000); // green 1
        ws2812_set_pixel(&ws2812_config, 0b000000001000000000000000); // red 1
        ws2812_set_pixel(&ws2812_config, 0b100000000000000000000000); // blue 1
        sleep_ms(DELAY);
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        ws2812_set_pixel(&ws2812_config, 0b000000000000000000000000); // black
        sleep_ms(DELAY);
    }

    return 0;
}
```

<br>

## License
[MIT](https://raw.githubusercontent.com/mytechnotalent/Pico_WS2812_Driver/main/LICENSE)
