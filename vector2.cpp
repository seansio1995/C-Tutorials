#include <iostream>
#include <vector>

using namespace std;



int main()
{
  vector<string> strings;

  strings.push_back("yes");
  strings.push_back("no");
  strings.push_back("fuck");


  for(vector<string>::iterator it=strings.begin();it!=strings.end();it++)
  {
    cout<<*it<<endl;
  }

  cout<<"Break"<<endl;

  vector<string>:: iterator it=strings.begin();
  it+=2;
  cout<<*it<<endl;
}
