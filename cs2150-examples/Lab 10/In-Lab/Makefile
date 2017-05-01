#Robert Alexander, RMA3MZ, Makefile Pre-Lab 10

# Defines the C++ compiler we'll be using
CXX	= clang++

# Defines the flags we'll be passing to the C++ compiler
CXXFLAGS	= -Wall -g

# All of the .o files for our program
OFILES	= huffManNode.o huffmandec.o

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)

# Cleanup
clean:
	/bin/rm -f *.o *~
	/bin/rm -f *.out

# Dependencies generated from -MM
huffManNode.o: huffManNode.cpp huffManNode.h
huffmandec.o: huffmandec.cpp huffManNode.h inLabHuffTree.cpp


