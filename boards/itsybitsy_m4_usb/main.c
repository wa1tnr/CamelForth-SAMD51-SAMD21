#include <atmel_start.h>
#include "atmel_start_pins.h"

void delay_some(void) {
    for (volatile int i = 230001; i > 0; i--) {
    }
}

void main_cf(void) {
    /* Initializes MCU, drivers and middleware */
    atmel_start_init();

    /* Replace with your application code */
    cdcd_acm_example();
    while (1) {
    }
}

int main(void) {
    main_cf();
}
