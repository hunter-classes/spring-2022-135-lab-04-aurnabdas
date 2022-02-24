
main: main.o all.o 
	g++ -o main main.o all.o 

main.o: main.cpp all.h 
	g++ -c main.cpp

box.o: all.cpp all.h
	g++ -c all.cpp

clean:
	rm -f main.o all.o 