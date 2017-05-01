//Robert Alexander, RMA3MZ, 9/9/13

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>
#include "ListItr.h"
using namespace std;

ListItr::ListItr(){
  current=new ListNode();
}

ListItr::ListItr(ListNode* theNode){
  current=theNode;
}

bool ListItr::isPastEnd() const{
  return (current->next==NULL);
}

bool ListItr::isPastBeginning() const{
  return (current->previous==NULL);
}

void ListItr::moveForward(){
  if(this->isPastEnd()!=true){
    current=current->next;
  }}

void ListItr::moveBackward(){
  if(this->isPastBeginning()!=true){
    current=current->previous;}
}

int ListItr::retrieve() const{
  return current->value;
}
