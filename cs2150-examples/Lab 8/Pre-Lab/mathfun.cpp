// mathfun.cpp, RMA3MZ

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

extern "C" int product (int , int);
extern "C" int power (int , int);

int main(){
  int x;
  int y;
  int pow;
  int prod;

  cout<<"please enter any positive integer: ";
  cin>>x;
  cout<<"please enter another positive integer: ";
  cin>>y;

  prod=product(x,y);
  pow=power(x,y);

  cout<<"product is: "<<prod<<endl;
  cout<<"power is: "<<pow<<endl;

  return 0;}
