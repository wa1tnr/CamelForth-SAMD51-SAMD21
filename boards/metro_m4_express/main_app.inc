// Tue Sep 11 19:30:38 UTC 2018
// On branch camelforth

#include "atsamdx1.h"

int main_app(void)
{
    USART_0_setup_local(); // atmel start USART driver
    USART_0_loop_camelforth(); // USART application: CamelForth
    while (1) { // trap - error handling
    }
}
