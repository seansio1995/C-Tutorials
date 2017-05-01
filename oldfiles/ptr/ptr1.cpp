#include <iostream>
using namespace std;
/*
arr is a ptr itself,
so the arr means the first element in the array
*/

int main()
{
	int arr[6]={1,2,3,4,5,6};
	int* ptr=arr;
	cout<<*ptr<<endl;
	cout<<*(ptr+1)<<endl;
	for(int i=2;i<6;i++)
	{
		cout<<*(ptr+i)<<endl;
	}
	return 0;
}