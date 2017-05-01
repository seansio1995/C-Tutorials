#include <iostream>
using namespace std;

int main()
{
	char c[6];
	char name[]="Chufan Xiao";
	char test[]="Lemmon"; //6 characters however the size is 7 including extra null-terminated '\0'
	string ans;
	c[0]='J';
	c[1]='o';
	c[2]='h';
	c[3]='o';
	c[4]='n';
	c[5]='\0';
	cout<<c<<endl;
	cout<<name<<endl;
	cout<<"The size of c is "<<sizeof(c)<<endl;
	cout<<"The size of name is "<<sizeof(name)<<endl;
	cout<<"The size of test is "<<sizeof(test)<<endl;
	cout<<"What is your name ?"<<endl;
	getline(cin,ans);
	cout<<"The answer is "<<ans<<endl;
	cout<<"The length of ans is "<<ans.length()<<endl;
	return 0;
}