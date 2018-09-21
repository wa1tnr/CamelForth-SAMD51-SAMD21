#include "atmel_start.h"
#include "pins.h"

// Pins:  PA16 (D13/LED) and PB14  D5)

void pins_setup(void) {
    PORT->Group[PORTA].DIRSET.reg = (uint32_t) (1 << 16);       // PA16 //  1 13 pinmode   // D13
    PORT->Group[PORTB].DIRSET.reg = (uint32_t) (1 << 14);       // PB14 //  1  5 pinmode   //  D5

    PORT->Group[PORTA].OUTTGL.reg = (uint32_t) (1 << 16);       // PA16 //    13 pintoggle // D13
    PORT->Group[PORTB].OUTTGL.reg = (uint32_t) (1 << 14);       // PB14 //     5 pintoggle //  D5

    PORT->Group[PORTA].OUTSET.reg |= (uint32_t) (1 << 16);      // PA16 //  1 13 pinwrite  // D13
    PORT->Group[PORTB].OUTSET.reg |= (uint32_t) (1 << 14);      // PB14 //  1  5 pinwrite  //  D5

    PORT->Group[PORTA].OUTCLR.reg = (uint32_t) (1 << 16);       // PA16 //  0 13 pinwrite  // D13
    PORT->Group[PORTB].OUTCLR.reg = (uint32_t) (1 << 14);       // PB14 //  0  5 pinwrite  //  D5
}

void toggle_d13(void) {
    PORT->Group[PORTA].OUTTGL.reg = (uint32_t) (1 << 16);       // PA16 //    13 pintoggle // D13
}

void reset_d13(void) {
    PORT->Group[PORTA].OUTCLR.reg = (uint32_t) (1 << 16);       // PA16 //  0 13 pinwrite  // D13
}
