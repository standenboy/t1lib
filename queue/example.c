#include <stdio.h>

#include "queue.h"

int main(){
	queue *q = initqueue(1024);
	enqueue(q, 10);
	enqueue(q, 20);
	
	printf("%d\n", dequeue(q)); 
	printf("%d\n", dequeue(q)); 

	deinitqueue(q);
}
