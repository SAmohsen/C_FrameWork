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

struct Stack {
	int top;
	unsigned int size;
	int *arr;

};

struct Stack* createStack(unsigned int size) ;
int isFull(struct Stack *mystack) ;
int isEmpty(struct Stack *mystack) ;
void push(struct Stack *mystack, int item) ;
int pop(struct Stack *mystack) ;
int getstacksize(struct Stack *mystack);
#endif /* DATASTRUCURES_STACK_H_ */
