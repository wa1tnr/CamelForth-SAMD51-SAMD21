/* wa1tnr - September, 2018 LGPL v2.1 */

#include "atsamdx1_getkey.inc"
#include "usart_ini.h" // was driver_init.h 10 SEPT 04:10 UTC
#include "atsamdx1.h"
extern char ch[];
extern int read_ln;
extern void queryKey(void);
extern void camelforth(void); // pivotal - do not omit!

struct io_descriptor *io;

void usart_sync_get_desc(void) {
    usart_sync_get_io_descriptor(&USART_0, &io);
}

void usart_sync_enbl(void) {
    usart_sync_enable(&USART_0);
}
#include "term_emul.inc"

void _spc(void) {
    io_write(io, (uint8_t *) " ",         1);
}

void _que(void) {
    io_write(io, (uint8_t *) "? ",         1);
    _spc();
}

void _ok(void) {
        io_write(io, (uint8_t *) " ok\r\n", 5); // echo TODO \r\n on some terminals
}

void _cr(void) {
    io_write(io, (uint8_t *) "\r\n",         2);
}

void cr(void) {
    _cr();
}

void USART_0_example_upper_camelforth(void) {
    usart_sync_get_desc();
    usart_sync_enbl();
    _cr();
}

void USART_0_example_lower_camelforth(void) {
    _cr();

    io_write(io, (uint8_t *)
        "Program is configured for 38400 bps speed.\n",              43);
    io_write(io, (uint8_t *)
        "Target MCU board is Adafruit Metro M4 Express.\n",          47);

    color_reset();
    io_write(io, (uint8_t *)
        "UART pins TX and RX used with CP2104 bridge.\n",            45);

    io_write(io, (uint8_t *) branchStamp(t,l));
    io_write(io, (uint8_t *) timeStamp(t,l));

    bg_blue(); fg_white(); bg_red();
    io_write(io, (uint8_t *)  "  ainsuForth MTX  ",  18); color_reset();
    io_write(io, (uint8_t *)  "\n\n",                 2); color_reset();

    bg_black(); bg_black(); fg_yellow(); // color it!

    while(-1) { // endless loop
        camelforth(); // right here is where CamelForth is invoked!
        io_write(io, (uint8_t *) "\n", 1);   italics(); fg_magenta();
        io_write(io, (uint8_t *)
            "USART_0_example_lower_camelforth() .. completes.\n", 49); // is alive
        color_reset(); // no italics
        io_write(io, (uint8_t *) "\n", 1);
    }
}
