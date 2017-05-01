#include <iostream>
using namespace std;

int main()
{
	int a,b;
	a=10;
	b=20;

	int* tmp; //tmp container
	cout<<"Addrs now:"<<endl;
	cout<<"a addr: "<<&a<<endl;
	cout<<"b addr: "<<&b<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;

	tmp=a;
	a=b;
	b=tmp;

	cout<<endl<<"Addrs after:"<<endl;
	cout<<"a addr: "<<&a<<endl;
	cout<<"b addr: "<<&b<<endl;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	return 0;
}