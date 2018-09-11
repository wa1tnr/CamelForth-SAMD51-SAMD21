#include <atmel_start.h>
#include "main_app.inc"

int main(void) {
    atmel_start_init();
    SystemInit();
    /* Replace with your application code */
    main_app();
    while (1) {
    }
}
