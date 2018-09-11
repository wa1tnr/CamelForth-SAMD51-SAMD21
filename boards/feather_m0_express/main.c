// from:

// Wed Aug 29 04:49:35 UTC 2018
// On branch xKM_converser_d51-nn-

#include <atmel_start.h>
#include "driver_examples.h"

int main(void) {
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();
    SystemInit();
    // 8 MHz CPU

    USART_0_example(); // demo

    /* Replace with your application code */
    while (1) {
    }
}
