/*
 * software_timer.h
 *
 *  Created on: Sep 8, 2025
 *      Author: qwein
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "tim.h"

extern int flag_timer[];
extern int counter_timer[];
void setTimer(int index, int duration);
int isTimerExpired(int index);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
