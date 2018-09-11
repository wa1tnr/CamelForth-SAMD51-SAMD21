/* forth.c stand-in file */
/* temporary - will disappear in a future commit */
/* scaffolding ;) */

#include <stdint.h>
#include <stdbool.h>
#include "forth.h"

#define SAMD51 // forth.h will supply this define
#ifdef SAMD51
#include "atsamdx1.inc"
#endif

extern void samplefunc(void); // remove this declaration later
void samplefunc(void) {
    // printf(" %d", *psp++);
    printf(" %d", 1);   printf(" %d", 7);
    printf(" %d", 14);  printf(" %d", 21);
}
void interpreter_jj(void) {
    printf(" %s", "Sample printf() pseudo-interpreter for testing.  \n\n");
    samplefunc();
}
