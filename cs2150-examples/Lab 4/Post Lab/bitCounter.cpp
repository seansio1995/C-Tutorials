//Robert Alexander, RMA3MZ, bitCounter.cpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int recBin(int x){
  int count;
  if (x==0){
    return 0;}
  else if(x%2==0){
    count=recBin(x/2);
    return count;}
  else{
    count=1+recBin((x-1)/2);
    return count;}
}

int main(int argc, char* argv[]){
  int N=atoi(argv[1]);
  cout<<recBin(N)<<endl;
  }


