#include <iostream>
using namespace std;

int main()
{
	char a1[]="hello";
	cout<<"a1 is "<<a1<<endl;
	char* a2;
	a2=a1;
	cout<<"a2 is "<<a2<<endl;
	cout<<"*a2 is "<<*a2<<endl;
	a2++;
	cout<<"Now *a2 is "<<*a2<<endl;
	a2--;
	cout<<"Now *a2 is "<<*a2<<endl;
	cout<<"Now a[2] is "<<*(a2+2)<<endl;
	return 0;
}