// Tue Sep 11 00:49:37 UTC 2018

#include <atmel_start.h>
#include "atsamdx1.h"

char ch[0]; // holds an 8-bit keystroke
int read_ln = 0; // how many chars were read

void _USART_read(void) { // hardware implementation-dependent keystroke reader
    read_ln = io_read(io,  (uint8_t *)ch, 1); // 1  is length
}

unsigned int getKey(void) { // hardware-independent wrapper
    _USART_read();
    uint8_t ch_read = (uint32_t) ch[0];
    return ch_read;
}

void queryKey(void) {
    _USART_read();
}
