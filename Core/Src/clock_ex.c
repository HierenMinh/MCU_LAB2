/*
 * clock_ex.c
 *
 *  Created on: Sep 11, 2025
 *      Author: qwein
 */
#include "clock_ex.h"

int hour = 15 , minute = 8 , second = 50;
void updateClockBuffer() {
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}

void clockRun() {
	second++;
	if (second >= 60) {
	  second = 0;
	  minute++;
	}
	if (minute >= 60) {
	  minute = 0;
	  hour++;
	}
	if (hour >= 24) {
	  hour = 0;
	}
	updateClockBuffer();
}
