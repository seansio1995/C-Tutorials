#Robert Alexander, RMA3MZ, Makefile Pre-Lab 11

# Defines the C++ compiler we'll be using
CXX	= clang++

# Defines the flags we'll be passing to the C++ compiler
CXXFLAGS	= -Wall -g

# All of the .o files for our program
OFILES	= topological.cpp

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)
	doxygen #single line added late

# Cleanup
clean:
	/bin/rm -f *.o *~
	/bin/rm -f *.out

# Dependencies generated from -MM

