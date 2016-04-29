#include <iostream>
using namespace std;

void insertionSort(int arr[], int length)
{
	for(int i=1;i<length;i++)
	{
		int j=i;
		while(arr[j]<arr[j-1] && j>0)
		{
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
			j--;
		}
	}
}


int main()
{
	int array[6]={7,56,8,9,11,2};
	insertionSort(array,6);
	for(int i=0;i<6;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}