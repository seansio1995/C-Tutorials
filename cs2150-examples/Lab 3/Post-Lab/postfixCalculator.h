//Robert Alexander, RMA3MZ, postfixCalculator.h
#ifndef postfixCalculator_h
#define postfixCalculator_h

#include <iostream>
#include "ListNode.h"
#include "ListItr.h"
#include "myStack.h"
using namespace std;

class postfixCalculator{
 public:
  postfixCalculator();
  ~postfixCalculator();
  void add();
  void addNum(int x);
  void negate();
  void subtract();
  void  multiply();
  void divide();
  int getTopValue();

 private:
  myStack numStack;
};

#endif
