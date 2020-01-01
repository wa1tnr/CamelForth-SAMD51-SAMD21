/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD51 has 14 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7
#define GPIO_PIN_FUNCTION_I 8
#define GPIO_PIN_FUNCTION_J 9
#define GPIO_PIN_FUNCTION_K 10
#define GPIO_PIN_FUNCTION_L 11
#define GPIO_PIN_FUNCTION_M 12
#define GPIO_PIN_FUNCTION_N 13

// Trellis M4 D- is PA25
#define PA24 GPIO(GPIO_PORTA, 24)

// Trellis M4 D+ is PA25
#define PA25 GPIO(GPIO_PORTA, 25)

// Trellis M4 NeoPixel is PA27 - 3V unshifted - goes to a level shifter
#define PA27 GPIO(GPIO_PORTA, 27)

// Trellis M4 DotStar Clock - PB02
#define PB02 GPIO(GPIO_PORTB, 2)

// Trellis M4 DotStar Data - PB03
#define PB03 GPIO(GPIO_PORTB, 3)

#endif // ATMEL_START_PINS_H_INCLUDED
