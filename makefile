test: main.o goblin.o card.o board.o
	g++ main.o goblin.o card.o board.o -o test

main.o: main.cpp
	g++ -c main.cpp -std=c++11

goblin.o: goblin.h goblin.cpp
	g++ -c goblin.cpp -std=c++11

card.o: card.h card.cpp
	g++ -c card.cpp -std=c++11

board.o: board.cpp board.h
	g++ -c board.cpp -std=c++11