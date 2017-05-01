#include <iostream>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"Enter a number n1: "<<endl;
	cin>>n1;
	cout<<"Enter a number n2: "<<endl;
	cin>>n2;
	for (int i=0;i<11;i++)
	{
		if(i==n1 || i==n2)
			{
				continue;
			}
		cout<<i<<"\t";
	}

	return 0;
}