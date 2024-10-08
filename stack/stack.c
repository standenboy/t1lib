#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "stack.h"

void stackdie(char *msg){
	fprintf(stderr, "stack:%s\n", msg);
	exit(1);
}

bool isempty(stack *s){
	return (s->sp == s->stack);
}

bool isfull(stack *s){
	return (s->saturation == s->size);
}

stack *initstack(size_t size){
	stack *s = malloc(sizeof(stack));
	s->stack = malloc(sizeof(int) * size);
	s->sp = s->stack;
	s->size = size;

	return s;
}

void push(stack *s, int i){
	if (isfull(s)) stackdie("stack overflow!");
	*s->sp = i;
	s->sp += sizeof(int);
	s->saturation += 1;
}

int pop(stack *s){
	if (isempty(s)) stackdie("stack underflow!");
	s->sp -= sizeof(int);
	s->saturation -= 1;
	return *s->sp;
}

void deinitstack(stack *s){
	free(s->stack);
	free(s);
}
