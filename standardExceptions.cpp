#include <iostream>
using namespace std;


class CanGoWrong{

public:
  CanGoWrong()
  {
    char *newMemory=new char[999999999999999999999];
    delete[] newMemory;
  }


};


int main()
{
  try{
  CanGoWrong wrong;
}

catch(bad_alloc &e)
{
  cout<<"Caught Exception"<<e.what()<<endl;
}
  return 0;
}   ###compiler test failed.......
