/*
 * led_matrix.h
 *
 *  Created on: Sep 16, 2025
 *      Author: qwein
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

#include "stdint.h"
#include "main.h"

/* Defines -------------------------------------------------------------------*/
//#define name_display
#define TIMER_MATRIX 4
#define TIMER_SHIFT 5
#define TIME_MATRIX 1
#define TIME_SHIFT 25

/* Function prototypes -------------------------------------------------------*/
void updateLEDMatrix(uint8_t index);
void shift_left();
#endif /* INC_LED_MATRIX_H_ */
