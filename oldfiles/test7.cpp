#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr[]={3,10,2,4,6,7};
	vector<int> myVector(arr,arr+sizeof(arr)/sizeof(int)); //construct a vector
	cout<<"The first element of myVector is "<<myVector.front()<<endl;
	return 0;
}