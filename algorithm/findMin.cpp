#include <iostream>
using namespace std;

int main()
{
	int n;
	int* arr;
	cout<<"Enter the elements number: "<<endl;
	cin>>n;
	arr=new int[n];
	for (int k=0;k<n;k++)
	{
		cout<<"enter number"<<k+1<<": ";
		cin>>*(arr+k);
	}
	cout<<"Display the array :"<<endl;

	for (int h=0; h<n;h++)
	{
		cout<<*(arr+h)<<" ";
	}
	cout<<endl;
	int min=arr[0];
	for (int i=1;i<n;i++)
	{
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"The min of this array is "<<min;
	cout<<endl;
	delete[] arr;
	return 0;

}