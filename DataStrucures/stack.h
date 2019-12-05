/*
 * stack.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_STACK_H_
#define DATASTRUCURES_STACK_H_

#define STACKSIZE 10
#include <stdio.h>

int fullstack() ;
int emptystack() ;
void push(int data);
int pop() ;
int peek() ;
int getstacksize() ;

#endif /* DATASTRUCURES_STACK_H_ */
