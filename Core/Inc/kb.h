#ifndef EMBEDDED_SYSTEMS_LAB_2_KB_H
#define EMBEDDED_SYSTEMS_LAB_2_KB_H

#define ROW1 0xFE
#define ROW2 0xFD
#define ROW3 0xFB
#define ROW4 0xF7

#include "stm32f4xx_hal.h"

uint8_t Check_Row( uint8_t  Nrow );
HAL_StatusTypeDef Set_Keyboard( void );

#endif //EMBEDDED_SYSTEMS_LAB_2_KB_H
