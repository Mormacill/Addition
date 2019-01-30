default:test

test: add.o main.o
	g++ -g -o test add.o main.o

add.o: add.cpp
	g++ -g -c add.cpp

main.o: main.cpp add.h
	g++ -g -c main.cpp

clean:
	rm *.o
