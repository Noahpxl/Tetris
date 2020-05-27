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

/*runt het programma wanneer dit wordt opgevraagd in de main*/
int ssd1306_RunTetris() {
    ssd1306_Fill(White);
    uint8_t j=0;
    while(j<21)
    {
    	uint32_t start = HAL_GetTick();
    	uint32_t end = start;
    	uint8_t Getal = 0;
    	uint8_t i = 0;
    	Getal=GetRandomNumber();
    	do {
    		ssd1306_DrawSquareBig(128-j*6, 64);
    		GetShape(6*i,42,Getal);
    		ssd1306_UpdateScreen();
    		i++;
    		end = HAL_GetTick();
    		HAL_Delay(857);
    		} while((end - start) < 18000-j*857);
    		j++;
    }
    HAL_Delay(1000);
    ssd1306_Fill(Black);
    ssd1306_SetCursor(2, 18);
    ssd1306_WriteString("Game Over", Font_16x26, White);
    ssd1306_UpdateScreen();

}

