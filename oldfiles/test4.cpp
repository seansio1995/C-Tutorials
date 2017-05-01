#include <iostream>
using namespace std;

void Double(int* a, int size) // int* a and a[] is the same argument
{
	for (int i=0; i<size; i++)
	{
		a[i]=a[i]*2;
	}
}


int main()
{
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(a[0]);
	Double(a,size);
	for (int i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}