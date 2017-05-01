#Robert Alexander, RMA3MZ, Makefile Pre-Lab 10

# Defines the C++ compiler we'll be using
CXX	= clang++

# Defines the flags we'll be passing to the C++ compiler
CXXFLAGS	= -Wall -g

# All of the .o files for our program
OFILES	= heap.o huffManEnc.o huffManNode.o huffTree.o 

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)

# Cleanup
clean:
	/bin/rm -f *.o *~
	/bin/rm -f *.out

# Dependencies generated from -MM
huffTree.o: huffTree.cpp huffManNode.h huffTree.h heap.h
huffManNode.o: huffManNode.cpp huffManNode.h
heap.o: heap.cpp heap.h huffManNode.h
huffManEnc.o: huffManEnc.cpp heap.h huffManNode.h huffTree.h

