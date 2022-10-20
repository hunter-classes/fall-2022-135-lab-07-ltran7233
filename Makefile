main: main.o unindent.o
	g++ -o main main.o unindent.o

#tests: test.o unindent.o
#	g++ -o tests.o tests.cpp unindent.o
	
#tests-ascii : tests-ascii.o
#	g++ -o test-ascii test-ascii.o

unindent: unindent.o
	g++ -o unindent unindent.o
 
main.o: main.cpp unindent.h
	g++ -c main.cpp

#tests.o : tests.cpp unindent.h
#	g++ -c tests.cpp
	
#test-ascii.o: test-ascii.cpp
#	g++ -c test-ascii.cpp

unindent.o: unindent.cpp unindent.h
	g++ -c unindent.cpp

clean:
	rm -f main.o unindent.o
