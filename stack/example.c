#include <stdio.h>

#include "stack.h"

int main(){
	stack *s = initstack(128);

	for (int i = 0; i < 258; i += 2)
		push(s, i);

	while (!isempty(s))
		printf("%d\n", pop(s));
	
	deinitstack(s);
}
