#include <stddef.h>
#include <stdbool.h>

typedef struct queue{
	int size;
	int *queue;
	int *end;
	int *head;
	int *tail;
} queue;

queue *initqueue(size_t size);
void enqueue(queue *q, int i);
int dequeue(queue *q);
void deinitqueue(queue *q);
