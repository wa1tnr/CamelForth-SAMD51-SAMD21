#include <string.h>

#define timeStamp(t,l) \
    "Mon Sep 10 19:30:42 UTC 2018\n\n", 32
// current target branch:
#define branchStamp(b,l) \
    "On branch excellent_progress_b      ", 36
// #define branchStamp(b,l) "master                   ", 25

#define stack_buffer_length 64

extern unsigned int *psp;
extern void itoa_write(void);
extern int input_integer;
extern void cmf_itoa(int n, char s[]);
extern char print_string[stack_buffer_length];
char print_string[stack_buffer_length];
extern struct io_descriptor *io;
extern void bold_italics_white(void);
extern void italics(void);
extern void bold_italics(void);
extern void n1uro_italics(void);
extern void fg_white_force_bold(void);
extern void fg_white(void);
extern void fg_yellow(void);
extern void bg_black(void);
extern void bg_blue(void);
extern void bg_red(void);
extern void color_reset(void);
extern void color_bold(void);
extern void _que(void);
extern void _ok(void);
extern void _bkbar(void); // broken bar
extern void _spc(void);
extern void _cr(void);
extern void cr(void); // why two cr?
extern void USART_0_example_upper_camelforth(void); // usart ini?
extern void USART_0_example_lower_camelforth(void); // invoke camelforth?
