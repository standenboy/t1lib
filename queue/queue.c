#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "queue.h"

void queuedie(char *msg){
	fprintf(stderr, "queue:%s\n", msg);
	exit(1);
}

queue *initqueue(size_t size){
	queue *q = malloc(sizeof(queue));
	q->queue = malloc(sizeof(int) * size);
	q->size = size;
	q->end = q->queue + size;
	q->head = q->queue;
	q->tail= q->queue;

	return q;
}

void enqueue(queue *q, int i){
	if ((q->tail + sizeof(int)) > q->end) queuedie("queue overflow");
	*q->tail = i;
	q->tail += sizeof(int);
}

int dequeue(queue *q){
	int r = *q->head;
	if ((q->head + sizeof(int)) > q->tail) queuedie("queue underflow");
	q->head += sizeof(int);
	return r;
}

void deinitqueue(queue *q){
	free(q->queue);
	free(q);
}
