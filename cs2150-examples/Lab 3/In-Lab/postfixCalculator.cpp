//Robert Alexander, RMA3MZ, postfixCalculator.cpp

#include <iostream>
#include "ListNode.h"
#include "ListItr.h"
#include <stack>
#include "postfixCalculator.h"
using namespace std;

postfixCalculator::postfixCalculator(){
  numStack=new stack<int>;
}

postfixCalculator::~postfixCalculator(){
  delete numStack;
}

void postfixCalculator::addNum(int x){
  numStack->push(x);
}

void postfixCalculator::add(){
  int x=numStack->top();
  numStack->pop();
  int y=numStack->top();
  numStack->pop();
  numStack->push((x+y));
}

void postfixCalculator::negate(){
  int x=numStack->top();
  numStack->pop();
  numStack->push(-x);
}

void postfixCalculator::subtract(){
  int x=numStack->top();
  numStack->pop();
  int y=numStack->top();
  numStack->pop();
  numStack->push((y-x));
}

void postfixCalculator::multiply(){
  int x=numStack->top();
  numStack->pop();
  int y=numStack->top();
  numStack->pop();
  numStack->push((x*y));
}

void postfixCalculator::divide(){
  int x=numStack->top();
  numStack->pop();
  int y=numStack->top();
  numStack->pop();
  numStack->push((y/x));
}

int postfixCalculator::getTopValue(){
  return numStack->top();
}
