//Robert Alexander, RMA3MZ, testPostfixCalc.cpp

#include <iostream>
#include <stack>
#include "postfixCalculator.h"
using namespace std;

int main(){
  postfixCalculator p;
  p.addNum(2);
  p.addNum(3);
  p.divide();
  cout <<p.getTopValue()<<endl;
}
