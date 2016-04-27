#include <iostream>
using namespace std;
/*
bubble sort is about doing swaps
loop from left to right
compare every pair from left to right
swap if left>right, so after one loop,
the rightmost one is the largest,
then repeat the loop from left to right-1 and so on
*/

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

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];//do the swap!
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(int q=0;q<n;q++)
	{
		cout<<arr[q]<<" ";
	}
	cout<<endl;
	delete[] arr;
	return 0;
}