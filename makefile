all: functions.o main.o
	gcc -o parsetest functions.o main.o

functions.o: function.c function.h
	gcc -c functions.c

main.o: main.c function.h
	gcc -c main.c

run:
	./parsetest

clean:
	rm *.o
	rm *~
