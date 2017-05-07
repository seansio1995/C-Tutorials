#include <iostream>
using namespace std;

void mightGoWrong()
{
  bool error1=false;
  bool error2=true;
  if (error1)
  {
    throw "someting went wrong";
  }

  if (error2)
  {
    throw string("someting else went wrong");
  }
}

void useMightGoWrong()
{
  mightGoWrong();
}

int main()
{
  try
  {
    useMightGoWrong();
  }

  catch(int e)
{
  cout<<"Error code:"<<e<<endl;
}

  catch(char const* e)
  {
    cout<<"Error Message:"<<e<<endl;
  }

  catch(string &e)
  {
    cout<<"Error Message:"<<e<<endl;
  }
return 0;
}
