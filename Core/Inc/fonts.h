#include "stm32f4xx_hal.h"

#ifndef EMBEDDED_SYSTEMS_LAB_2_FONTS_H
#define EMBEDDED_SYSTEMS_LAB_2_FONTS_H


typedef struct {
    const uint8_t FontWidth;
    uint8_t FontHeight;
    const uint16_t *data;
} FontDef;

extern FontDef Font_7x10;
extern FontDef Font_11x18;
extern FontDef Font_16x26;

#endif //EMBEDDED_SYSTEMS_LAB_2_FONTS_H
