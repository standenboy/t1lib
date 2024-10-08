#include <stddef.h>
#include <stdbool.h>

typedef struct stack {
	int size;
	int saturation;
	int *stack;
	int *sp;
} stack;

bool isempty(stack *s);
bool isfull(stack *s);
stack *initstack(size_t size);
void push(stack *s, int i);
int pop(stack *s);
void deinitstack(stack *s);
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
