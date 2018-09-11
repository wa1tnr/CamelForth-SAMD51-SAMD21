#include <string.h>

#define timeStamp(t,l) \
    "Tue Sep 11 01:15:11 UTC 2018\n\n", 32
// current target branch:
#define branchStamp(b,l) \
    "On branch camelforth    ", 24

// #define branchStamp(b,l) "master                   ", 25

#define stack_buffer_length 64

/*
extern unsigned int *psp;
extern void itoa_write(void);
extern int input_integer;
extern void cmf_itoa(int n, char s[]);
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
*/
extern struct io_descriptor *io;
extern char print_string[stack_buffer_length];
extern void USART_0_example_upper_camelforth(void); // usart ini?
extern void USART_0_example_lower_camelforth(void); // invoke camelforth?
char print_string[stack_buffer_length];
