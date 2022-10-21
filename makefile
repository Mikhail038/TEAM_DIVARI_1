all: DO

DO: resistance.o select.o result.o  check.o
	g++ resistance.o select.o result.o  check.o -o resistance

resistance.o: resistance.cpp
	g++ -c -o resistance.o resistance.cpp

select.o: select.cpp
	g++ -c -o select.o select.cpp

result.o: result.cpp
	g++ -c -o result.o result.cpp

check.o: check.cpp
	g++ -c -o check.o check.cpp
