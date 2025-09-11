/*
 * led_7seg.h
 *
 *  Created on: Sep 8, 2025
 *      Author: qwein
 */

#ifndef INC_LED_7SEG_H_
#define INC_LED_7SEG_H_

#include "main.h"

extern int led_buffer[];

void display7SEG(int num);
void update7SEG(int num);



#endif /* INC_LED_7SEG_H_ */
