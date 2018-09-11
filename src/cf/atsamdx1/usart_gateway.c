/* wa1tnr - September, 2018 LGPL v2.1 */

#include "atsamdx1_getkey.inc"
#include "usart_ini.h"
#include "atsamdx1.h"

// extern ch[];
extern int read_ln;
extern void queryKey(void);
extern void camelforth(void);

struct io_descriptor *io;

void usart_sync_get_desc(void) {
    usart_sync_get_io_descriptor(&USART_0, &io);
}

void usart_sync_enbl(void) {
    usart_sync_enable(&USART_0);
}

void USART_0_example_upper_camelforth(void) {
    usart_sync_get_desc();
    usart_sync_enbl();
}

void USART_0_example_lower_camelforth(void) {
    while(-1) { // endless loop
        camelforth(); //  CamelForth is invoked here
        io_write(io, (uint8_t *) "dot.dot.dot\n", 12);
    }
}
