#include<vector>
#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;


int sum(vector<int> vectors)
{
  int total=0;
  for (int i=0;i<vectors.size();i++)
  {
    total+=vectors[i];
  }
  return total;
}


void display(vector<int> vectors)
{
  for (int i=0;i<vectors.size();i++)
  {
    cout<<vectors[i]<<endl;
  }
}

void displayS(vector<string> vectors)
{
  for (int i=0;i<vectors.size();i++)
  {
    cout<<vectors[i]<<endl;
  }
}


void buildVector(vector<int> &vect)
{
  srand(time(NULL));
  for(int i=0;i<1000;i++)
  {
    vect.push_back(rand()%23+1);
  }
}

int searchVector(vector<int> vect,int value)
{
  int found=-1;
  found=vect.at(value);
  return found;
}
int main()
{
  // vector<int> vectors(10,10);
  //
  // // for (int i=0;i<5;i++)
  // // {
  // //   vectors.push_back(i);
  // // }
  // //cout<<vectors[0]<<endl;
  // vectors[0]=11;
  // vectors[1]=12;
  // vectors.push_back(13);
srand(time(NULL));
  vector<string> vectors;
  //buildVector(vectors);
  // int found=searchVector(vectors,12);
  // if (found>-1)
  // {
  //   cout<<"Value 12 is at "<<found<<"th place"<<endl;
  //
  // }
  //
  // else
  // {
  //   cout<<"Didn't find 12 in the vct"<<endl;
  // }
  // int number;
  // for(int i=0;i<100;i++)
  // {
  //   number=(rand()%10)+1;
  //   vectors.push_back(number);
  // }
  //display(vectors);
  // cout<<vectors[0]<<endl;
  //cout<<sum(vectors)<<endl;
  //cout<<rand() % 10 +1<<endl;
  vectors.push_back("Sean Xiao");
  vectors.push_back("John Snow");
  vectors.push_back("Lily Potter");
  sort(vectors.begin(),vectors.end());
  displayS(vectors);
  return 0;
}
