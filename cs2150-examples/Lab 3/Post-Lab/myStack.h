//Robert Alexander, RMA3MZ, myStack.h

#ifndef myStack_h
#define myStack_h

#include <iostream>
#include "ListNode.h"
#include "List.h"
#include "ListItr.h"
using namespace std;

class myStack{
 public:
  myStack();
  ~myStack();
  void push(int x);
  void pop();
  bool empty();
  int top();
  
 private:
  List list1;
};

#endif
