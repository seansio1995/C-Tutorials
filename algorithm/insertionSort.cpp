#include <iostream>
using namespace std;

void insertionSort(int arr[], int length)
{
	for(int i=1;i<length;i++)
	{
		int curr=arr[i];
		int j=i-1;
		while(j>=0 && curr<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=curr;
	}
}

int main()
{
	int array[6]={13,2,6,1,35,44};
	insertionSort(array,6);
	for (int i=0;i<6;i++)
	{
		cout<<array[i]<<" ";
	}

	return 0;
}