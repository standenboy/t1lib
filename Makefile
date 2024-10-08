t1lib: deps headers
	cc ./stack/stack.o ./queue/queue.o -shared -o t1lib.so

deps: stack queue
	cd stack; make
	cd queue; make

headers: 
	sh ./genheader.sh

install: t1lib
	cp t1lib.so /usr/local/lib64/libt1lib.so
	cp t1lib.h /usr/local/include

uninstall: 
	rm /usr/local/lib64/t1lib.so
	rm /usr/local/include/t1lib.h

example:
	cc example.c -o example -lt1lib

clean:
	rm -rf t1lib.so t1lib.h
	cd stack; make clean
	cd queue; make clean
