#include <string.h>

#define timeStamp(t,l) \
    "Tue Sep 11 19:30:38 UTC 2018\n\n", 32
// current target branch:
#define branchStamp(b,l) \
    "On branch camelforth    ", 24

// #define branchStamp(b,l) "master    ", 10

#define stack_buffer_length 64

extern struct io_descriptor *io;
extern char print_string[stack_buffer_length];
// extern void USART_0_example_upper_camelforth(void);
extern void USART_0_setup_local(void);
// extern void USART_0_example_lower_camelforth(void);
extern void USART_0_loop_camelforth(void);
char print_string[stack_buffer_length];
