/*
ptr and array,
magical relations
*/

#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	for (int i=0;i<5;i++)
	{
		cout<<"Enter num "<<i+1<<":"<<endl;
		cin>>*(arr+i);
	}

	for (int i=0;i<5;i++)
	{
		cout<<*(arr+i)<<" ";
	}
	return 0;
}