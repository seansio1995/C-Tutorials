#include <iostream>
using namespace std;


int main()
{
	int n;
	int* arr;
	cout<<"Enter the elements number: "<<endl;
	cin>>n;
	arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number"<<i+1<<":";
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	cout<<"The max number in arr is "<<max<<endl;
	return 0;
}