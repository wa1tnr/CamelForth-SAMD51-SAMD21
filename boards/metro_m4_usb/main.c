#include <atmel_start.h>
#include "usb_start.h"

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
        cdcd_acm_example();
	while (1) {
	}
}
