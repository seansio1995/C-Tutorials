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
   p.addNum(8);
   /*p.addNum(9);
   p.subtract();
   p.addNum(5);
   p.multiply();
   p.addNum(-3);
   p.negate();
   p.subtract();
   p.addNum(4);
   p.multiply();
   p.addNum(9);
   p.multiply();
   p.negate();
   p.addNum(8);
   p.addNum(9);
   p.multiply();
   p.subtract();*/

   /* p.addNum(6);
   p.addNum(4);
   p.add();
   p.addNum(5);
   p.divide();
   p.addNum(3);
   p.multiply();
   p.addNum(6);
   p.addNum(6);
   p.multiply();
   p.multiply();*/
   
   /*p.addNum(3);
   p.addNum(4);
   p.add();
   p.addNum(7);
   p.divide();
   p.addNum(4);
   p.subtract();
   p.negate();
   p.addNum(3);
   p.multiply();
   p.addNum(2);
   p.addNum(2);
   p.addNum(2);
   p.multiply();
   p.multiply();
   p.multiply();
   p.addNum(3);
   p.multiply();*/

   /*p.addNum(220);
   p.addNum(4);
   p.subtract();*/

   p.addNum(1296);
   p.addNum(6);
   p.divide();

   cout <<p.getTopValue()<<endl;
   /*
  cout << "enter the values you want calculated followed by a space" << endl;

  while(true){
    string s;
    cin >> s;
    if (s == " ")
      break;
    //cout << p.getTopValue() << endl;

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

  cout << p.getTopValue() << endl;*/
}
