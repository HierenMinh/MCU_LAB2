/*
 * ex2.c
 *
 *  Created on: Sep 9, 2025
 *      Author: qwein
 */
#include "ex2.h"

void ex2Init() {
	setTimer(1, 100);
	HAL_GPIO_WritePin(DOT_GPIO_Port, DOT_Pin, LED_OFF);
}

void ex2Run() {
	HAL_GPIO_TogglePin(DOT_GPIO_Port, DOT_Pin);
}
