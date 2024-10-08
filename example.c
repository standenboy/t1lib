#include <t1lib.h>
#include <stdio.h>

int main(){
	queue *q = initqueue(1024);
	stack *s = initstack(1024);

	push(s, 10);
	push(s, 9);

	printf("stack: %d, %d\n", pop(s), pop(s));

	enqueue(q, 20);
	enqueue(q, 19);

	printf("stack: %d, %d\n", dequeue(q), dequeue(q));
}
