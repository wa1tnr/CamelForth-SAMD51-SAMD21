/****h* camelforth/samd51.inc
 *
 * from:
 ****h* camelforth/tivaio.c
 *
 * NAME
 *  samd51.inc
 * DESCRIPTION
 *  Terminal I/O, MCU initialization, and main entry point for
 *  CamelForth in C, for the ATSAMD51J19A Adafruit Metro M4 Express target board.
 * SYNOPSIS
 *  Provides the functions
 *      void putch(char c)      write one character to terminal
 *      char getch(void)        await/read one character from keyboard
 *      int getquery(void)      return true if keyboard char available
 *      void initTermios(void)  configure terminal for Forth
 *      void resetTermios(void) reset terminal configuration, if req'd
 *      int main(void)          main entry point for SAMD51
 * AUTHORS
 *  Brad Rodriguez
 *  wa1tnr
 ******
 * LICENSE TERMS
 *  CamelForth in C
 *  copyright (c) 2016,2017 Bradford J. Rodriguez.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Commercial inquiries should be directed to the author at
 *  115 First St., #105, Collingwood, Ontario L9Y 4W3 Canada
 *  or via email to bj@camelforth.com
 */

#include <atmel_start.h>
#include <stdio.h> // trouble
#include "atsamdx1.h"

extern void queryKey(void);
extern int read_ln;

int length_print_string = 0;

#define printf(format,integer) \
    length_print_string = 0; \
    print_string[0] = (uint32_t) "\0"; \
    sprintf(print_string, format, integer); \
    length_print_string = strlen(print_string); \
    io_write(io, (uint8_t *)print_string, length_print_string)

// #define printf UARTprintf
#define print_this(s,l) io_write(io, (uint8_t *)s, l);
// #define getch UARTgetc
#define getch getKey

char cfcfc;

void ucf_emit(void) {
    uint32_t  rbyte = 0;
    int       char_r   =  '0';
    char      *cbyte;
    rbyte = cfcfc;

    cbyte = (char*) &rbyte;
    int df = (uint32_t) cbyte;
    char *dfbyte = (char*) df;
    char_r = (int)dfbyte;
    io_write(io, (uint8_t *) char_r, 1);
}

void putch(char c) {
    cfcfc = c;
    ucf_emit();
}

int getquery(void) {
    // return(UARTCharsAvail(UART0_BASE) != 0);
    int l_read_ln = 0;
    int not_found = 1;
    while(not_found) {
        queryKey(); // sets read_ln;
        if (read_ln > 0) not_found = 0; // escape loop
    }
    // return(UARTCharsAvail(UART0_BASE) != 0);
    io_write(io, (uint8_t *)" !chars! ", 9);
    l_read_ln = read_ln;
    read_ln = 0;
    return l_read_ln; // can be more than 1
}

// void interpreter(void);         /* forward reference */

void interpreter_jj(void);

#define WAIT_A_WHILE 20100123
void camelforth(void) {
    print_this("(leaving ainsuForth MTX)", 24);
    print_this("\nCamelForth in C - SAMD51 testing\n", 34);

    // interpreter();
    interpreter_jj();

    for (volatile int i = WAIT_A_WHILE; i > 0; i--) {
    }
    print_this("(entering ainsuForth MTX)", 25);
}
