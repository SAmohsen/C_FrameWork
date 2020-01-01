/*
 * stack.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */
#include <stdlib.h>
#include "stack.h"



struct Stack* createStack(unsigned int size) {
	struct Stack *mystack = (struct Stack*) malloc(sizeof(struct Stack));
	mystack->size = size;
	mystack->arr = (int*) malloc(sizeof(int) * size);
	mystack->top = -1;
	return mystack;
}
int isFull(struct Stack *mystack) {
	if (mystack->top == (mystack->size - 1)) {
		return 1;
	}
	return 0;
}
int isEmpty(struct Stack *mystack) {
	if (mystack->top == -1) {
		return 1;
	}
	return 0;
}
void push(struct Stack *mystack, int item) {
	if (!isFull(mystack)) {
		mystack->top++;
		mystack->arr[mystack->top] = item;
	}
}
int pop(struct Stack *mystack) {
	if (!isEmpty(mystack)) {
		int item = mystack->arr[mystack->top];
		mystack->top--;
		return item;
	}
return 0;
}
int getstacksize(struct Stack *mystack){
	return mystack->top+1 ;
}
