#include "usart_ini.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

struct usart_sync_descriptor USART_0;

void USART_0_PORT_init(void)
{

	gpio_set_pin_function(PA10, PINMUX_PA10C_SERCOM0_PAD2);

	gpio_set_pin_function(PA11, PINMUX_PA11C_SERCOM0_PAD3);
}

void USART_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM0);
	_gclk_enable_channel(SERCOM0_GCLK_ID_CORE, CONF_GCLK_SERCOM0_CORE_SRC);
}

void USART_0_init(void)
{
	USART_0_CLOCK_init();
	usart_sync_init(&USART_0, SERCOM0, (void *)NULL);
	USART_0_PORT_init();
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA16

	// Set pin direction to output
	gpio_set_pin_direction(PA16, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(PA16,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_function(PA16, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA17

	// Set pin direction to output
	gpio_set_pin_direction(PA17, GPIO_DIRECTION_OUT);

	gpio_set_pin_level(PA17,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_function(PA17, GPIO_PIN_FUNCTION_OFF);

	USART_0_init();
}
