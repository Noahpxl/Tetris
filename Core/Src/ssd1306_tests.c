/*
 * ssd1306_test.c
 *
 *  Created on: Jan 30, 2020
 *      Author: 20004719
 */

#include "ssd1306.h"
#include "Shapes.h"
#include <string.h>
#include <stdio.h>


void ssd1306_RunTetris() {
    ssd1306_Fill(White);

    uint32_t start = HAL_GetTick();
    uint32_t end = start;
    int i = 0;
    GetRandomShape(0,42);
    do {

        ssd1306_UpdateScreen();

        i++;
        end = HAL_GetTick();
    } while((end - start) < 5000);

    HAL_Delay(1000);
    ssd1306_Fill(White);
    ssd1306_SetCursor(2, 18);
    ssd1306_UpdateScreen();
}
void Beweging(uint8_t x, uint8_t y)
{

	ssd1306_SetCursor(x,y);
	x = x + 6;

}
