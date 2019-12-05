/*
 * stack.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#include "stack.h"

int arr[STACKSIZE];
static int top = -1;

int fullstack() {
	if (top == (STACKSIZE - 1)) {
		return 1;
	}
	return 0;
}

int emptystack() {
	if (top == -1) {
		return 1;
	}
	return 0;
}

void push(int data){
	if (!fullstack()) {
		top++;
		arr[top] = data;
	} else
		printf("stack is full");
}

int pop() {
	int data;
	if (!emptystack()) {
		data = arr[top];
		top--;
		return data;
	} else
		printf("stack is empty..");
	return 0;
}

int peek() {
	return arr[top];
}

int getstacksize() {
	return top;
}
