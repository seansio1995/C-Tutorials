#include <iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"Enter a string:"<<endl;
	//cin>>str;
	cin.getline(str,100);
	cout<<"The string you enter is "<<str<<endl;
	return 0;
}