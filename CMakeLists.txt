cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)
project(pico_ws2812_driver C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(pico_ws2812_driver
    ws2812.c
    main.c
)

pico_enable_stdio_usb(pico_ws2812_driver 0)
pico_enable_stdio_uart(pico_ws2812_driver 1)

pico_add_extra_outputs(pico_ws2812_driver)

target_link_libraries(pico_ws2812_driver 
    pico_stdlib
)
