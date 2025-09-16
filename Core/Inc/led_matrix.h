/*
 * led_matrix.h
 *
 *  Created on: Sep 11, 2025
 *      Author: qwein
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_


/* Includes ------------------------------------------------------------------*/
#include "stdint.h"
#include "main.h"

#define TIMER_MATRIX 4
#define TIME_MATRIX 1
#define TIMER_SHIFT 5
#define TIME_SHIFT 25

/* Defines -------------------------------------------------------------------*/
//#define name_display

/* Function prototypes -------------------------------------------------------*/
void updateLEDMatrix(uint8_t index);
void shift_left();

#endif /* INC_LED_MATRIX_H_ */
