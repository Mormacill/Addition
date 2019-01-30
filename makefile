#REV2.0

default:calc

calc: op.o main.o
	g++ -g -o calc op.o main.o

op.o: op.cpp
	g++ -g -c op.cpp

main.o: main.cpp op.h
	g++ -g -c main.cpp

clean:
	rm *.o
