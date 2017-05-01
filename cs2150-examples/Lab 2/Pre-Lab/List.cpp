//Robert Alexander, RMA3MZ, 9/9/13

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include "List.h"
#include "ListItr.h"
using namespace std;

List::List(){
  ListNode *head=new ListNode();
  ListNode *tail=new ListNode();
  head->previous=NULL;
  tail->next=NULL;
  head->next=tail->next;
  count=0;
}

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

List::~List(){
  delete head;
  delete tail;
}

bool List::isEmpty() const{
  return(count==0);
}

void List::makeEmpty(){
  ListNode* current=head->next;
  while (current!=tail){
    current=current->next;
    delete head->next;
  }
  head->next=tail;
  tail->previous=head;
  count=0;
}

ListItr List::first(){
  ListItr itr1;
  itr1.current=head->next;
  return itr1;
}

ListItr List::last(){
  ListItr itr1;
  itr1.current=tail->previous;
  return itr1;
}

void List::insertAfter(int x, ListItr position){
  ListNode *pos=position.current;
  ListNode *newNode=new ListNode;
  ListNode *nextNode=pos->next;
  newNode->next=nextNode;
  newNode->previous=pos;
  newNode->value=x;
  pos->next=newNode;
  nextNode->previous=newNode;
}

void List::insertBefore(int x, ListItr position){
  ListNode *pos=position.current;
  ListNode *newNode=new ListNode;
  ListNode *prevNode=pos->previous;
  newNode->next=pos;
  newNode->previous=prevNode;
  newNode->value=x;
  prevNode->next=newNode;
  pos->previous=newNode;
}

void List::insertAtTail(int x){
  ListNode *newNode=new ListNode;
  ListNode *prevNode=tail->previous;
  newNode->next=tail;
  newNode->value=x;
  prevNode->next=newNode;
  tail->previous=newNode;
}


void List::remove(int x){
  //  ListItr itr1=first();
  // while(!isPastEnd()){
  //   if(itr1.current->value==x){
  //     delete itr1.current;
  // }}
  
}


ListItr List::find(int x){
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

int List::size() const{
  return count;
}

void printList(List& theList, bool forward){}
