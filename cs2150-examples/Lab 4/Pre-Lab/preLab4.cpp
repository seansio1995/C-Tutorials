//Robert Alexander, RMA3MZ, PreLab4.cpp

#include <iostream>
#include <limits>
using namespace std;

void sizeOfTest(){
  int i=10;
  char c[1];
  unsigned int u=1;
  float f=0;
  double d=0.0;
  bool b=0;
  int* ip;
  char* cp[1];
  double* dp;
  cout<< "Size of Int:" <<sizeof(i)<<endl;
  cout<< "Size of Char:" <<sizeof(c)<<endl;
  cout<< "Size of Unsigned Int:" <<sizeof(u)<<endl;
  cout<< "Size of Float:" <<sizeof(f)<<endl;
  cout<< "Size of Double:" <<sizeof(d)<<endl;
  cout<< "Size of Bool:" <<sizeof(b)<<endl;
  cout<< "Size of Int Pointer:" <<sizeof(ip)<<endl;
  cout<< "Size of Char Pointer:" <<sizeof(cp)<<endl;
  cout<< "Size of Double Pointer:" <<sizeof(dp)<<endl;
}

void outputBinary(unsigned int i){
  for (int x=numeric_limits<unsigned int>::digits-1; x>=0; --x){
    //Found numeric_limits online, provides max number of bits available
    if (i & (1<<x)){
      cout<<'1';}
    else{
      cout<<'0';}
  }
}

void overflow(){
  unsigned int x=4294967296;
  cout<< "Int Overflow:" <<x<<endl;
}

int main(){
  int x;
  cout<<"provide your value x:"<<endl;
  cin>>x;
  sizeOfTest();
  outputBinary(x);
  overflow();}
