#include <iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5};
	int* p=a;
	cout<<"The size of a is "<<sizeof(a)<<endl;
	cout<<"The address of a is "<<a<<endl;
	cout<<"The first element in a is "<<*a<<endl;
	cout<<"The address of a[1] is "<<a+1<<endl;
	cout<<"The second element in a is "<<*(a+1)<<endl;
	cout<<"a[0] increments 3 is "<<*a+3<<endl;
	cout<<"The pointer p is "<<p<<endl;
	cout<<"The value get from p is "<<*p<<endl; // dereferencing p for fun
	return 0;
}