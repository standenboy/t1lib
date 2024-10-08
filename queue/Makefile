CC=cc
CFLAGS=-fPIC

queue.o: queue.c
	${CC} queue.c -c -o queue.o ${CFLAGS}
clean:
	rm -rf queue.o example
example: queue.o example.c
	${CC} example.c queue.o -o example ${CFLAGS}
