/*
 * led_7seg.c
 *
 *  Created on: Sep 8, 2025
 *      Author: qwein
 */
#include "led_7seg.h"

#define SEG_OFF 1
#define SEG_ON 0

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
void update7SEG(int index) {
	switch (index) {
	case 0:
		display7SEG(led_buffer[0]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_ON);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
		break;
	case 1:
		display7SEG(led_buffer[1]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_ON);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
		break;
	case 2:
		display7SEG(led_buffer[2]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_ON);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_OFF);
		break;
	case 3:
		display7SEG(led_buffer[3]);
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, LED_OFF);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, LED_ON);
		break;
	default:
		break;
	}
}
void display7SEG(int num) {
    const uint8_t lut[10] = {
		0x3F, // 0: a b c d e f
		0x06, // 1:   b c
		0x5B, // 2: a b   d e   g
		0x4F, // 3: a b c d     g
		0x66, // 4:   b c     f g
		0x6D, // 5: a   c d   f g
		0x7D, // 6: a   c d e f g
		0x07, // 7: a b c
		0x7F, // 8: a b c d e f g
		0x6F  // 9: a b c d   f g
	};

	uint8_t m = (num >= 0 && num <= 9) ? lut[num] : 0x79; // invalid -> display 'E'

	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, (m & (0x01 << 0)) ? SEG_ON : SEG_OFF); // a
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, (m & (0x01 << 1)) ? SEG_ON : SEG_OFF); // b
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, (m & (0x01 << 2)) ? SEG_ON : SEG_OFF); // c
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, (m & (0x01 << 3)) ? SEG_ON : SEG_OFF); // d
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, (m & (0x01 << 4)) ? SEG_ON : SEG_OFF); // e
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, (m & (0x01 << 5)) ? SEG_ON : SEG_OFF); // f
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, (m & (0x01 << 6)) ? SEG_ON : SEG_OFF); // g
}


