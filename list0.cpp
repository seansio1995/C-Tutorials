#include<list>
#include<iostream>
using namespace std;


int main()
{
  list<int> numbers;

  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);
  numbers.push_back(4);
  numbers.push_back(5);
  numbers.push_back(6);

  numbers.push_front(0);
  list<int>:: iterator it=numbers.begin();
  it++;
  numbers.insert(it,101);
  for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++)
  {
    cout<<*it<<endl;
  }
  list<int>:: iterator eraseit=numbers.begin();
  eraseit++;
  numbers.erase(eraseit);

  for(list<int>::iterator it=numbers.begin();it!=numbers.end();it++)
  {
    cout<<*it<<endl;
  }

  return 0;

}
