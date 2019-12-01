all: function.o main.o
	gcc -o parsetest function.o main.o

function.o: function.c function.h
	gcc -c function.c

main.o: main.c function.h
	gcc -c main.c

run:
	./parsetest

clean:
	rm *.o
	rm *~
