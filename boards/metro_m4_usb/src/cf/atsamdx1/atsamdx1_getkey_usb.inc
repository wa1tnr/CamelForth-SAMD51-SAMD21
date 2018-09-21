#include "atsamdx1.h"

unsigned int getKey(void) {     // hardware-independent wrapper
    while (strlen(usbd_cdc_in_buffer) == 0) {
        cdcdf_acm_read((uint8_t *) usbd_cdc_in_buffer,
                       sizeof(usbd_cdc_in_buffer));
    }
    uint8_t ch_read = (uint32_t) usbd_cdc_in_buffer[0];
    usbd_cdc_in_buffer[0] = '\0';
    usbd_cdc_in_buffer[1] = '\0';
    return ch_read;
}
void queryKey(void) {
    // TODO wa1tnr
}
