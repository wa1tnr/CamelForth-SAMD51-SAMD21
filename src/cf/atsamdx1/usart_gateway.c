// Mon Sep 10 21:38:46 UTC 2018
#include "usart_ini.h"
#include "atsamdx1.h"
struct io_descriptor *io;

void usart_sync_get_desc(void) {
    usart_sync_get_io_descriptor(&USART_0, &io);
}

void usart_sync_enbl(void) {
    usart_sync_enable(&USART_0);
}
