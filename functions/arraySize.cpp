#include <iostream>
using namespace std;

int main()
{
	int arr[5]={1,2,3,4,5};
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(arr)/sizeof(int)<<endl;
	return 0;
}