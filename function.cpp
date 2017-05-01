
#include<iostream>
using namespace std;

int square(int num)
{
  int square=num*num;
  return square;
}

bool isEven(int num)
{
  return (num%2==0);
}


void swap(int &num1, int &num2){
  int temp=num1;
  num1=num2;
  num2=temp;
}

int main()
{
  int num1=12;
  int num2=13;
  cout<<num1<<endl;
  cout<<num2<<endl;
  swap(num1,num2);
  cout<<"After swap"<<endl;
  cout<<num1<<endl;
  cout<<num2<<endl;

  return 0;
}
