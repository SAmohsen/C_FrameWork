/*
 * queue.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */



#include "queue.h"
static int rear = -1;
static int front = -1;
int arr[queuesize];

int fullqueue() {
	if (((rear + 1) % queuesize) == front) {
		return 1;
	} else
		return 0;
}

int emptyqueue() {

	if (rear == front) {
		return 1;
	} else
		return 0;

}

void enqueue(int data) {
	if (!fullqueue()) {
		rear = (rear + 1) % queuesize;
		arr[rear] = data;

	} else
		printf("queue is full ");
}

int dequeue() {
	if (!emptyqueue()) {

		front = (front + 1) % queuesize;
		int data = arr[front];

		return data;
	}
	printf("queue  is empty ");
	return -1;
}

void printqueue() {
	int f = front;
	int r = rear;
	while (!emptyqueue()) {

		printf("%d ", dequeue());

	}
	printf("\n");
	front = f;
	rear = r;

}

