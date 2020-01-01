/*
 * queue.c
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */



#include "queue.h"

struct Queue* createQueue(unsigned int capacity) {
	/*allocate a new queue in memory */
	struct Queue *myqueue = (struct Queue*) malloc(sizeof(struct Queue));
	myqueue->front =0 ;
	myqueue->rear = 0;
	myqueue->currentsize=0;
	myqueue->capacity = capacity;
	myqueue->array = (int*) malloc(sizeof(int) * capacity);
	return myqueue;
}
int isQueueFull(struct Queue *myqueue) {
	int fullqueue = 0;
	if (((myqueue->rear + 1) % myqueue->capacity) == myqueue->front) {
		fullqueue = 1;
	}
	return fullqueue;
}
int isQueueEmpty(struct Queue *myqueue){
int emptyqueue = 0 ;
if (myqueue->rear  == myqueue->front) {
		emptyqueue = 1;
	}
return emptyqueue;
}
void enqueue(struct Queue *myqueue, int element) {
	if (!isQueueFull(myqueue)) {
		myqueue->array[myqueue->rear] = element;
		myqueue->currentsize=myqueue->currentsize+1;
		myqueue->rear = (myqueue->rear + 1) % myqueue->capacity;
	}
}
int dequeue(struct Queue *myqueue){
	if(!isQueueEmpty(myqueue)){
		int item = myqueue->array[myqueue->front] ;
		myqueue->currentsize=myqueue->currentsize-1;
		myqueue->front=(myqueue->front+1) % myqueue->capacity;
		return item ;
	}
	return NAN ;
}

