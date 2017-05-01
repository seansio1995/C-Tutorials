#include<iostream>
using namespace std;


void reinit(int* val)
{
  *val=12;
}

int main()
{
  int number1=10;
  // //cout<<&number<<endl; //0x7fff5f863a88
  // int number2=12;
  // //  int* ptr1=&number1;
  // //  int* ptr2=&number2;
  // // //  cout<<ptr1<<endl; //0x7fff50a43a88
  // // //  cout<<*ptr1<<endl;
  // //  //
  // // //  number=12;
  // // //  cout<<*ptr1<<endl; //12 point to the address
  // // cout<<ptr1<<endl;
  // // cout<<ptr2<<endl;
  // //
  // // *ptr1=13;
  // // *ptr2=14;
  // // cout<<number1<<endl;
  // // cout<<number2<<endl;
  // // cout<<(ptr1==&number1)<<endl;
  //
  // int& refer1=number1;
  // int& refer2=number2;
  //
  // cout<<refer1<<endl;
  // cout<<refer2<<endl;
  //
  // refer1=refer2;
  //
  // cout<<refer1<<endl;
  // cout<<refer2<<endl;
  //
  // cout<<number1<<endl;
  // cout<<number2<<endl;

  // int* ptr1=&number1;
  //
  // cout<<sizeof(ptr1)<<endl;
  // cout<<sizeof(*ptr1)<<endl;
cout<<number1<<endl;
  reinit(&number1);
  cout<<number1<<endl;


  return 0;
}
