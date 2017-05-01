#Robert Alexander, RMA3MZ, Lab06 Makefile
CXX=clang++
CXXFLAGS= -Wall -O2
#DEBUG=-Wall -g

OFILES = hashTable.o List.o ListItr.o ListNode.o timer.o wordPuzzle.o

puzzle: $(OFILES)
	$(CXX) $(DEBUG) $(OFILES)

clean:
	-rm -f *.o *~ outputfile



hashTable.o: hashTable.cpp hashTable.h ListNode.h List.h ListItr.h
List.o: List.cpp List.h ListNode.h ListItr.h
ListItr.o: ListItr.cpp ListItr.h ListNode.h List.h
ListNode.o: ListNode.cpp ListNode.h
timer.o: timer.cpp timer.h
wordPuzzle.o: wordPuzzle.cpp hashTable.h ListNode.h List.h ListItr.h \
  timer.h
