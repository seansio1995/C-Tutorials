//Robert Alexander, RMA3MZ, 9/9/13

/*
 * Filename: ListNode.h
 * Description: ListNode class definition
 */
#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
using namespace std;

class ListNode {
public:
    ListNode();	//Constructor

private:
    int value;
    ListNode *next, *previous;	//for doubly linked lists
    friend class List;	// List needs to be able to access/change
    friend class ListItr;	// ListItr needs to access/change

};
#endif
