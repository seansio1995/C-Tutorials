#include <iostream>
using namespace std;

void findDuplicate(char str[])
{
	for(int i=0;i<strlen(str);i++)
	{
		for(int j=0;j<strlen(str);j++)
		{
			if(i != j && str[i]==str[j])
			{
				cout<<str[i]<<endl;
			}
		}
	}
}


int main()
{
	char str[40]="this is just a test";
	findDuplicate(str);
	return 0;
}