/*
 * ex1.c
 *
 *  Created on: Sep 8, 2025
 *      Author: qwein
 */
#include "ex1.h"
#define LED_ON 0
#define LED_OFF 1

int status = 1;


void ex1Init() {
	setTimer(0, 50);
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_OFF);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_OFF);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
}
void ex1Run() {
	switch(status) {
	case 1:
		display7SEG(status);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_ON);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
		status = 2;
		break;
	case 2:
		display7SEG(status);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_ON);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
		status = 3;
		break;
	default:
		break;
	}

}

