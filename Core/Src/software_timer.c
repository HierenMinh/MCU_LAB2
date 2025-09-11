/*
 * software_timer.c
 *
 *  Created on: Sep 8, 2025
 *      Author: qwein
 */
#include "software_timer.h"

#define MAX_TIMER 5


int flag_timer[MAX_TIMER];
int counter_timer[MAX_TIMER];

struct Node {

};

void setTimer(int index, int duration) {
	counter_timer[index] = duration;
	flag_timer[index] = 0;
}

int isTimerExpired(int index) {
	if(flag_timer[index] == 1) {
		return 1;
	}
	return 0;
}

void timerRun() {
	for(int i = 0; i < MAX_TIMER; i++) {
		if(counter_timer[i] > 0) {
			counter_timer[i]--;
			if(counter_timer[i] <= 0) {
				flag_timer[i] = 1;
			}
		}
	}
}
