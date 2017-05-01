//Robert Alexander, RMA3MZ, postfixCalculator.h

#include <iostream>
#include <stack>
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
  stack<int>* numStack;
};
