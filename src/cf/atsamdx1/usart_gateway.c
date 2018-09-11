#include "usart_ini.h" // was driver_init.h 10 SEPT 04:10 UTC
#include "atsamdx1.h"

extern void camelforth(void); // pivotal - do not omit!
struct io_descriptor *io;

void usart_sync_get_desc(void) {
    usart_sync_get_io_descriptor(&USART_0, &io);
}

void usart_sync_enbl(void) {
    usart_sync_enable(&USART_0);
}

void _cr(void) {
    io_write(io, (uint8_t *) "\r\n", 2);
}

void USART_0_example_upper_camelforth(void) {
    usart_sync_get_desc();
    usart_sync_enbl();
    _cr();
}

void USART_0_example_lower_camelforth(void) {
    _cr();

    io_write(io, (uint8_t *)
        "Program is configured for 38400 bps speed.\n",     43);
    io_write(io, (uint8_t *)
        "Target MCU board is Adafruit Metro M4 Express.\n", 47);

    io_write(io, (uint8_t *)
        "UART pins TX and RX used with CP2104 bridge.\n",   45);

    io_write(io, (uint8_t *) branchStamp(t,l));
    io_write(io, (uint8_t *) timeStamp(t,l));

    io_write(io, (uint8_t *)  "  ainsuForth MTX  ",  18);
    io_write(io, (uint8_t *)  "\n\n",                 2);

    while(-1) { // endless loop
        camelforth(); // right here is where CamelForth is invoked!
        io_write(io, (uint8_t *) "\n", 1);
        io_write(io, (uint8_t *)
            "USART_0_example_lower_camelforth() .. completes.\n", 49); // is alive
        io_write(io, (uint8_t *) "\n", 1);
    }
}
