//Robert Alexander, RMA3MZ, threexinput.cpp

#include <iostream>
#include <cstdlib>
#include "timer.h"

using namespace std;

extern "C" int threexplusone(int);

int main(){
  int num;
  int runs;
  double time;

  cout<<"give a number please: "<<endl;
  cin>>num;
  cout<<"how many runs: "<<endl;
  cin>>runs;

  timer t;
  t.start();
  for(int i=0;i<runs;i++){
    threexplusone(num);
  }
  t.stop();

  time=t.getTime();

  cout<<"result is: "<<threexplusone(num)<<endl;
  cout<<"Average time was: "<<(time/runs)<<endl;
  return 0;
}
