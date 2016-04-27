/*
From selection sort:
step 1:
from i=0 to i=n-2 which is the left part

step 2: the right part: j=i+1 to j=n-1
find the minimun in right part

step 3:
swap it with the left part

*/

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
		cout<<"Enter number"<<k+1<<":"<<endl;
		cin>>arr[k];
	}

	cout<<"Display the array:"<<endl;
	for(int l=0;l<n;l++)
	{
		cout<<arr[l]<<" ";
	}

	cout<<endl<<endl<<"Array after sorted: "<<endl<<endl;
	for (int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int tmp=arr[i];
		arr[i]=arr[min];
		arr[min]=tmp;
	}

	for(int q=0;q<n;q++)
	{
		cout<<arr[q]<<" ";
	}
	cout<<endl;
	delete[] arr;
	return 0;


}