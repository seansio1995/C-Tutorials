#include <iostream>
using namespace std;

void display(char[]);

int main()
{
	char str[100];
	cout<<"Enter a string :"<<endl;
	cin.getline(str,100);
	display(str);
	return 0;
}

void display(char s[]) //pass char array which is a string
{
	cout<<"You entered "<<s<<endl;
}