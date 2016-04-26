#include <iostream>
using namespace std;

void display(int[],int);

int main()
{
	int array[5]={1,2,3,4,5};
	display(array,5);
	return 0;
}


void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}