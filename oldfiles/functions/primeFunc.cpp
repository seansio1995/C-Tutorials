#include <iostream>
#include <cmath>
using namespace std;

void prime();

int main()
{
	prime();
	return 0;
}

void prime()
{
	int i,num,flag;
	cout<<"Enter the num for test: "<<endl;
	cin>>num;
	for(i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			flag=0;
			break;//divisible so the is not prime 
		}

		else
		{
			flag=1;
		}
	}

	if(flag==0)
	{
		cout<<"The number "<<num<<" is not prime"<<endl;
	}
	else if (flag==1)
	{
		cout<<"The number "<<num<<" is prime"<<endl;
	}
}