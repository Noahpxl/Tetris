

#include "Shapes.h"
#include <string.h>
#include <stdio.h>
#include "ssd1306.h"

void Vierkant(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x+6,y-6);	
}

void L(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y-12);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x,y-12);	
}

void I(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x,y-12);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x,y+18);
	ssd1306_DrawSquare(x,y+24);
	ssd1306_DrawSquare(x,y+30);
	ssd1306_DrawSquare(x,y+36);
}
void Z(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y+6);
	ssd1306_DrawSquare(x+12,y+12);	
}
void Piramide(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+12,y);
	ssd1306_DrawSquare(x+6,y+6);
	ssd1306_DrawSquare(x+18,y);	
}
