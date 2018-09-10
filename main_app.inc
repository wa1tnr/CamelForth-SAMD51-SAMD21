// Mon Sep 10 05:45:44 UTC 2018
// On branch continue_forked-f-GP_

#include "atsamdx1.h"

int main_app(void)
{
    USART_0_example_upper_camelforth(); // atmel start USART driver
    USART_0_example_lower_camelforth();
    while (1) {
    }
}
