//Robert Alexander, RMA3MZ, 9/9/13, List.h

/*
 * Filename: List.h
 * Description: List class definition
 * 	also includes the prototype for non-member function print()
 */
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h"
#include "ListItr.h"
using namespace std;

//Modified from Lab 2 for Lab 6
class ListItr;

class List {
public:
    List();				//Constructor
    List(const List& source);	//Copy Constructor
    ~List();			//Destructor
    List& operator=(const List& source);	//Equals Operator
    bool isEmpty() const;		//Returns true if empty; else false
    void makeEmpty();	//Removes all items except blank head and tail
    ListItr first(); 		//Returns an iterator that points to
    //the ListNode in the first position
    ListItr last();			//Returns an iterator that points to
    //the ListNode in the last position
    void insertAfter(string x, ListItr position);
    //Inserts x after current iterator position p
    void insertBefore(string x, ListItr position);
    //Inserts x before current iterator position p
    void insertAtTail(string x);	//Insert x at tail of list
    void remove(string x);		//Removes the first occurrence of x
    ListItr find(string x);		//Returns an iterator that points to
    // the first occurrence of x, else
    // return a blank iterator

    int size() const; //Returns the number of elements in the list

private:
    ListNode *head, *tail;	//indicates beginning and end of the list
    int count;			//#of elements in list
    friend class ListItr;
};

// printList: non-member function prototype
void printList(List& source, bool direction);
//prints list forwards when direction is true
//or backwards when direction is false
#endif
/* end of List.h */
