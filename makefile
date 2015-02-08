lab2: main.o Node.o LinkedList.o
	g++ -std=c++11 -g main.o Node.o LinkedList.o -o lab2
main.o: main.cpp LinkedList.h
	g++ -std=c++11 -g -c main.cpp
Node.o: Node.cpp Node.h
	g++ -std=c++11 -g -c Node.cpp
LinkedList.o: LinkedList.cpp LinkedList.h
	g++ -std=c++11 -g -c LinkedList.cpp

clean:
	rm*.o lab2
	clean done

