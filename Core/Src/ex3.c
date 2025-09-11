/*
 * ex3.c
 *
 *  Created on: Sep 11, 2025
 *      Author: qwein
 */

#include "ex3.h"

static int index = 0;
void ex3Run() {
	update7SEG(index++);
	if(index >= 4) {
		index = 0;
	}
}
