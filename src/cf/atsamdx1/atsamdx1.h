#include <string.h>

#define timeStamp(t,l) \
    "Mon Sep 10 19:30:42 UTC 2018\n\n", 32
// current target branch:
#define branchStamp(b,l) \
    "On branch excellent_progress_b      ", 36

#define stack_buffer_length 64

extern void USART_0_example_upper_camelforth(void);
extern void USART_0_example_lower_camelforth(void);
extern struct io_descriptor *io;
extern char print_string[stack_buffer_length];
char print_string[stack_buffer_length];
