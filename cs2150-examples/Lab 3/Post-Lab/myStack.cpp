//Robert Alexander, RMA3MZ, myStack.cpp

#include <iostream>
#include "ListNode.h"
//#include "List.cpp"
//#include "ListItr.cpp"
//#include "ListNode.cpp"
#include "myStack.h"
using namespace std;

myStack::myStack()
{
}

myStack::~myStack(){
  // delete list1;
}

void myStack::push(int x){
  ListItr itr1=list1.first();
  list1.insertBefore(x,itr1);
}

void myStack::pop(){
  ListItr itr1=list1.first();
  int y=itr1.retrieve();
  list1.remove(y);
}

bool myStack::empty(){
  return(list1.size()==0);
}

int myStack::top(){
  ListItr itr1=list1.first();
  return itr1.retrieve();
}
