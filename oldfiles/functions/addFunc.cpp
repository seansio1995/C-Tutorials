#include <iostream>
using namespace std;
// func prototype below
int add(int,int);


int main()
{
	int num1,num2;
	cout<<"Enter number 1: "<<endl;
	cin>>num1;
	cout<<"Enter number 2: "<<endl;
	cin>>num2;
	int result=add(num1,num2);
	cout<<"The result is "<<result<<endl;
	return 0;

}

int add(int a, int b)
{
	int sum;
	sum=a+b;
	return sum;
}