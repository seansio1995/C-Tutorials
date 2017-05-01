#include <iostream>
using namespace std;

int main()
{
	int result=1;
	int n;
	cout<<"Enter the factorial n:"<<endl;
	cin>>n;
	for (int i=1;i<n+1;i++)
	{
		result=result*i;
	}

	cout<<endl<<"The factorial result is "<<result<<endl;
	return 0;
}