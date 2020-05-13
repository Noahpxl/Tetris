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
    uint32_t j=0;
    while(j<21)
    {
    	uint32_t start = HAL_GetTick();
    	uint32_t end = start;
    	uint32_t Getal = 0;
    	int i = 0;
    	Getal=GetRandomNumber();
    	do {
    		ssd1306_Fill(White);
    		GetShape(6*i,42,Getal);
    		ssd1306_UpdateScreen();
    		i++;
    		end = HAL_GetTick();
    		HAL_Delay(857);
    		} while((end - start) < 18000);
    		j++;
    }
    HAL_Delay(1000);
    ssd1306_Fill(White);
    ssd1306_SetCursor(2, 18);
    ssd1306_UpdateScreen();
}

