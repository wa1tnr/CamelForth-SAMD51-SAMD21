#include <atmel_start.h>
#include "main_app.inc"


// ///////////// temporary placement here  ///////////
extern struct io_descriptor *io;
extern void samplefunc(void);
// ///////////// temporary placement here  ///////////

int main(void) {
    atmel_start_init();
    SystemInit();
    /* Replace with your application code */
    main_app();
    samplefunc();
    io_write(io, (uint8_t *)
        "test 1 2 3", 10);
    while (1) {
    }
}
