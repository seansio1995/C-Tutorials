#include <iostream>
#include <fstream>

using namespace std;


int main()
{
  // ofstream outFile("example.txt",ios::out);
  // for(int i=0;i<10;i++)
  // {
  //   outFile<<i<<endl;
  // }
  // outFile.close(); //writing file content

  string fileName="example.txt";
  string line;
  ifstream inFile(fileName.c_str(),ios::in);

  if(!inFile)
  {
    cout<<"File not Found"<<endl;
  }

  while(!inFile.eof())
  {
    inFile>>line;
    cout<<line<<endl;
  }

  inFile.close();
  cout<<"Done"<<endl;
  return 0;
}
