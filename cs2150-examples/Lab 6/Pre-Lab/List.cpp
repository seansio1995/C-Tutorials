//Robert Alexander, RMA3MZ, 9/9/13, List.cpp

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include "List.h"
#include "ListItr.h"
using namespace std;

//Constructor 
List::List(){
  head=new ListNode();
  tail=new ListNode();
  head->previous=NULL;
  tail->next=NULL;
  head->next=tail;
  tail->previous=head;
  count=0;
}

//provided copy constructor
List::List(const List& source) {
    head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {	   //deep copy of the list
        insertAtTail(iter.retrieve());
        iter.moveForward();
    }
}

//Copy Assignment operator
List& List::operator=(const List& source)	{ //Equals operator
    if (this == &source)
        return *this;
    else {
        makeEmpty();
        ListItr iter(source.head->next);
        while (!iter.isPastEnd()) {
            insertAtTail(iter.retrieve());
            iter.moveForward();
        }
    }
    return *this;
}

//Destructor
List::~List(){
  delete head;
  delete tail;
}

//returns if list is empty
bool List::isEmpty() const{
  return(count==0);
}

//makes list empty
void List::makeEmpty(){
  ListNode *temp=head->next;
  while(temp!=tail){
    temp=temp->next;
    delete temp->previous;
    temp->next=temp->next;
    temp->previous->next=temp->next;
  }
  count=0;
}

//sets ListItr to first element in list
ListItr List::first(){
  ListItr itr1;
  itr1.current=head->next;
  return itr1;
}

//sets ListItr to last element in list
ListItr List::last(){
  ListItr itr1;
  itr1.current=tail->previous;
  return itr1;
}

//inserts element after current position of ListItr
void List::insertAfter(string x, ListItr position){
  ListNode *pos=position.current;
  ListNode *newNode=new ListNode;
  ListNode *nextNode=pos->next;
  newNode->next=nextNode;
  newNode->previous=pos;
  newNode->value=x;
  pos->next=newNode;
  nextNode->previous=newNode;
  count++;
}

//inserts element before current position of ListItr
void List::insertBefore(string x, ListItr position){
  ListNode *pos=position.current;
  ListNode *newNode=new ListNode;
  ListNode *prevNode=pos->previous;
  newNode->next=pos;
  newNode->previous=prevNode;
  newNode->value=x;
  prevNode->next=newNode;
  pos->previous=newNode;
  count++;
}

//inserts element before the dummy tail
void List::insertAtTail(string x){
  ListNode *newNode=new ListNode;
  ListNode *prevNode=tail->previous;
  newNode->next=tail;
  newNode->value=x;
  prevNode->next=newNode;
  tail->previous=newNode;
  newNode->previous=prevNode;
  count++;
}

//removes first instance of an element in the lsit
void List::remove(string x){
    ListItr itr1=find(x);
    ListNode *pos=itr1.current;
    ListNode *prevNode=pos->previous;
    ListNode *nextNode=pos->next;
    prevNode->next=nextNode;
    nextNode->previous=prevNode;
    count--;
}

//finds the first instance of an element in the list
ListItr List::find(string x){
  ListItr itr1=first();
  while(!itr1.isPastEnd()){
    if(itr1.current->value==x){
      return itr1;}
    else{
      itr1.moveForward();
    }
  }
  return itr1;
}

//returns the list size
int List::size() const{
  return count;
}

//prints the list forwards or backwards
void printList(List& theList, bool forward){
  ListItr itr1=theList.first();
  ListItr itr2=theList.last();
  if (forward){
   while(!itr1.isPastEnd()){
     cout << itr1.retrieve();
     itr1.moveForward();}
  }
    else{
      while(!itr2.isPastBeginning()){
       cout << itr2.retrieve();
       itr2.moveBackward();}}
}

