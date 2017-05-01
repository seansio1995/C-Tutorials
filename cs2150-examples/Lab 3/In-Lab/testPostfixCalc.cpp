//Robert Alexander, RMA3MZ, testPostfixCalc.cpp

#include <iostream>
#include <stack>
#include "postfixCalculator.h"
using namespace std;
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <cstring>

int main(){
   postfixCalculator p;
  // p.addNum(2);
  // p.addNum(3);
  // p.divide();
  // cout <<p.getTopValue()<<endl;

  cout << "enter the values you want calculated followed by a space" << endl;

  while(true){
    string s;
    cin >> s;
    if (s == " ")
      break;

    const char* cstr=s.c_str();
    
  
  //Positive Numbers
    if(isdigit(cstr[0])){
    //account for negative
    int x=atoi(cstr);
    p.addNum(x);
  }

  //Negative Numbers
    if(s[0]=='-' && s.length()>1){
    int x=atoi(cstr);
    p.addNum(-x);
  }

  if(s=="+"){
    p.add();}

  if(s=="-"){
    p.subtract();
    }
    
  if(s=="~"){
    p.negate();
    }

  if(s=="*"){
    p.multiply();
  }

  if(s=="/"){
    p.divide();
  }}

cout << p.getTopValue() << endl;
}
