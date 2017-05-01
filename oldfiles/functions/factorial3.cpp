#include <iostream>
using namespace std;

int factorial(int);

int main()
{
	int num;
	cout<<"Enter a number :"<<endl;
	cin>>num;
	int res=factorial(num);
	cout<<"The result is "<<res<<endl;
	return 0;
}


int factorial(int num)
{
	if(num>1)
	{
		return num*factorial(num-1);
	}

	else
	{
		return 1;
	}
}