#include <atmel_start.h>
#include "driver_examples.h" // wa1tnr

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

        USART_0_example(); // simple test of the USART.  wa1tnr

	/* Replace with your application code */
	while (1) {
	}
}
