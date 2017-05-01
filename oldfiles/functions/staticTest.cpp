#include <iostream>
using namespace std;

void test()
{
	static int var=3;
	cout<<++var<<endl;
}

int main()
{
	test();//4
	test();//5
	test();//6
	return 0;
}