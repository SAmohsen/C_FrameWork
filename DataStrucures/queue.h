/*
 * queue.h
 *
 *  Created on: Dec 4, 2019
 *      Author: sayed
 */

#ifndef DATASTRUCURES_QUEUE_H_
#define DATASTRUCURES_QUEUE_H_

#include <stdlib.h>
struct Queue
{  int front, rear, currentsize;
    unsigned int capacity;
    int* array;
};
#define NAN -1

struct Queue* createQueue(unsigned int capacity) ;
int isQueueFull(struct Queue *myqueue) ;
int isQueueEmpty(struct Queue *myqueue);
void enqueue(struct Queue *myqueue, int element) ;
int dequeue(struct Queue *myqueue);

#endif /* DATASTRUCURES_QUEUE_H_ */
