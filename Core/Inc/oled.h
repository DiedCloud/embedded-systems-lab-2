#include "stm32f4xx_hal.h"
#include "fonts.h"

#ifndef EMBEDDED_SYSTEMS_LAB_2_OLED_H
#define EMBEDDED_SYSTEMS_LAB_2_OLED_H

#define OLED_I2C_PORT		hi2c1
#define OLED_I2C_ADDR        0x78
#define OLED_WIDTH           128
#define OLED_HEIGHT          64

typedef enum {
    Black = 0x00,
    White = 0x01
} OLED_COLOR;

typedef struct {
    int64_t CurrentX;
    int64_t CurrentY;
    uint8_t Inverted;
    uint8_t Initialized;
} OLED_t;

extern I2C_HandleTypeDef OLED_I2C_PORT;

uint8_t oled_Init(void);
void oled_Fill(OLED_COLOR color);
void oled_UpdateScreen(void);
void oled_DrawVLine(uint8_t x1, uint8_t x2, uint8_t y, OLED_COLOR color);
void oled_DrawHLine(uint8_t y1, uint8_t y2, uint8_t x, OLED_COLOR color);
void oled_DrawSquare(uint8_t x1, uint8_t x2, uint8_t y1, uint8_t y2, OLED_COLOR color);
void oled_DrawPixel(uint8_t x, uint8_t y, OLED_COLOR color);
char oled_WriteChar(char ch, FontDef Font, OLED_COLOR color);
char oled_WriteString(char* str, FontDef Font, OLED_COLOR color);
void oled_SetCursor(uint8_t x, uint8_t y);
void oled_NextLine(FontDef Font);

#endif //EMBEDDED_SYSTEMS_LAB_2_OLED_H
