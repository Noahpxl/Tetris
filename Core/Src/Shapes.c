

#include "Shapes.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ssd1306.h"

/*tekent een vierkant op een plaats bepaald door x en y*/
int Vierkant(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y-18);
	ssd1306_DrawSquare(x,y-12);
	ssd1306_DrawSquare(x+6,y-12);
	ssd1306_DrawSquare(x+6,y-18);
}
/*tekent een L vorm op een plaats bepaald door x en y*/
int L(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y-18);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}
/*tekent een gespiegelde L op een plaats bepaald door x en y*/
int LMirrored(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}
/*tekent een I op een plaats bepaald door x en y*/
int I(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-12);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x+6,y-18);
}
/*tekent een Z op een plaats bepaald door x en y*/
int Z(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x,y-12);
}
/*tekent een gespiegelde Z op een plaats bepaald door x en y*/
int ZMirrored(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}
/*tekent een piramide vorm op een plaats bepaald door x en y*/
int Piramide(uint8_t x, uint8_t y)
{
	ssd1306_DrawSquare(x+6,y);
	ssd1306_DrawSquare(x+6,y-6);
	ssd1306_DrawSquare(x,y-6);
	ssd1306_DrawSquare(x+6,y-12);
}

/*Geeft een random vorm weer op basis van een random gegenereerd getal op een plaats bepaald door x en y*/
int GetShape(uint8_t x, uint8_t y, uint8_t Getal)
{
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
