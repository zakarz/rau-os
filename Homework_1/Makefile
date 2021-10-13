all: result

result: main.o ComplexNumber.o
	g++ main.o ComplexNumber.o -o result

main.o: main.cpp
	g++ -c main.cpp

ComplexNumber.o: ComplexNumber.cpp ComplexNumber.h
	g++ -c ComplexNumber.cpp

clean:
	rm *.o result
