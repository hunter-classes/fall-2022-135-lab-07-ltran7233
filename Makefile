main: main.o unindent.o
	g++ -o main main.o unindent.o
 
main.o: main.cpp unindent.h
	g++ -c main.cpp

unindent.o: unindent.cpp unindent.h
	g++ -c unindent.cpp

clean:
	rm -f main.o unindent.o
