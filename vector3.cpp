#include <iostream>
#include <vector>

using namespace std;


int main()
{
  vector<double> numebers(20);
  cout<<"Size:"<<numebers.size()<<endl;
  int capacity=numebers.capacity();

  cout<<"Capacity:"<<capacity<<endl;
  for(int i=0;i<10000;i++)
  {
    if(numebers.capacity()!=capacity)
    {
      capacity=numebers.capacity();
      cout<<"Capacity updates:"<<capacity<<endl;
    }
    numebers.push_back(i);
  }


  numebers.resize(100);
  cout<<"Size:"<<numebers.size()<<endl;
  cout<<"Capacity:"<<numebers.capacity()<<endl;
  return 0;
}


// Size:20
// Capacity:20
// Capacity updates:40
// Capacity updates:80
// Capacity updates:160
// Capacity updates:320
// Capacity updates:640
// Capacity updates:1280
// Capacity updates:2560
// Capacity updates:5120
// Capacity updates:10240
