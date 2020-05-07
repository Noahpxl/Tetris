

#include "Shapes.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ssd1306.h"

int Vierkant(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y-18);
	ssd1306_DrawSquare(x,y-12);
	ssd1306_DrawSquare(x+6,y-12);
	ssd1306_DrawSquare(x+6,y-18);
}

int L(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y-18);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}

int LMirrored(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}

int I(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-12);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-18);

}
int Z(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x,y-12);
}

int ZMirrored(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}

int Piramide(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}

int GetRandomShape(uint8_t x, uint8_t y)
{
	srand(time(0));
    uint8_t Getal = (rand() % 7) +1;


    switch (Getal)
    {
        case 1:
                return Vierkant(x,y);
                break;
        case 2:
                return L(x,y);
                break;
        case 3:
                return I(x,y);
                break;
        case 4:
                return Z(x,y);
                break;
        case 5:
                return Piramide(x,y);
                break;
        case 6:
                return ZMirrored(x,y);
                break;
        case 7:
                return LMirrored(x,y);
                break;
       default:
                break;
    }
}
