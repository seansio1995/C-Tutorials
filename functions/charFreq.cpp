#include <iostream>
using namespace std;

int main()
{
	char c[100];
	char ch;
	int count=0;
	cout<<"Enter a string: "<<endl;
	cin.getline(c,100);
	cout<<"Enter a char: "<<endl;
	cin>>ch;
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]==ch)
		{
			count++;
		}
	}

	cout<<"The frequency in this array is "<<count<<endl;
	return 0;
}