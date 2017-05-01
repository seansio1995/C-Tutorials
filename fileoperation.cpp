#include <iostream>
#include <fstream>

using namespace std;


int main()
{
  ofstream outFile("example.txt",ios::out);
  for(int i=0;i<10;i++)
  {
    outFile<<i<<endl;
  }
  outFile.close();
  cout<<"Done"<<endl;
  return 0;
}
