all: compile run

compile:
	g++ -I ./include/ -o ./lib/Hucre.o -c ./src/Hucre.cpp	
	g++ -I ./include/ -o ./lib/Doku.o -c ./src/Doku.cpp
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Node.o -c ./src/Node.cpp
	g++ -I ./include/ -o ./lib/BST.o -c ./src/BST.cpp
	g++ -I ./include/ -o ./lib/Organ.o -c ./src/Organ.cpp
	g++ -I ./include/ -o ./lib/Sistem.o -c ./src/Sistem.cpp
	g++ -I ./include/ -o ./lib/Organizma.o -c ./src/Organizma.cpp
	g++ -I ./include/ -o ./lib/Kontrol.o -c ./src/Kontrol.cpp
	g++ -I ./include/ -o ./lib/TestProgram.o -c ./src/TestProgram.cpp
	g++ -I ./include/ -o ./lib/Main.o -c ./src/Main.cpp
	g++ ./lib/Hucre.o ./lib/Doku.o ./lib/Queue.o ./lib/Radix.o ./lib/Node.o ./lib/BST.o ./lib/Organ.o ./lib/Sistem.o ./lib/Organizma.o ./lib/Kontrol.o ./lib/TestProgram.o ./lib/Main.o	-o ./bin/run.exe
	
run:
	./bin/run