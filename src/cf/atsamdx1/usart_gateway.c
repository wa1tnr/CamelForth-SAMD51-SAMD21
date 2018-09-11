/* wa1tnr - September, 2018 LGPL v2.1 */

#include <atmel_start.h>
#include "atsamdx1_getkey.inc"

extern void camelforth(void);
struct io_descriptor *io;

void USART_0_example_upper_camelforth(void) {
    usart_sync_get_io_descriptor(&USART_0, &io);
    usart_sync_enable(&USART_0);
}

void USART_0_example_lower_camelforth(void) {
    while(-1) {
        // io_write(io, (uint8_t *)"DEBUG entry point.", 18);
        camelforth();
    }
}
