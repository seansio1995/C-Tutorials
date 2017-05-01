//Robert Alexander, RMA3MZ, 9/9/13, ListItr.cpp

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include "ListItr.h"
using namespace std;

//constructor
ListItr::ListItr(){
  current=new ListNode();
}

//second constructor
ListItr::ListItr(ListNode* theNode){
  current=theNode;
}

//returns if the itr is past the end
bool ListItr::isPastEnd() const{
  return (current->next==NULL);
}

//returns if the itr is past the beginning
bool ListItr::isPastBeginning() const{
  return (current->previous==NULL);
}

//moves the itr forward
void ListItr::moveForward(){
  if(this->isPastEnd()!=true){
    current=current->next;
  }}

//moves the itr backwards
void ListItr::moveBackward(){
  if(this->isPastBeginning()!=true){
    current=current->previous;}
}

//returns value at the itr's current node
int ListItr::retrieve() const{
  return current->value;
}
