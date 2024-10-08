CC=cc
CFLAGS=-fPIC

stack.o: stack.c
	${CC} stack.c -c -o stack.o ${CFLAGS}
clean:
	rm -rf stack.o example
example: stack.o example.c
	${CC} example.c stack.o -o example ${CFLAGS}
