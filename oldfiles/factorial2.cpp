#include <iostream>
using namespace std;

//use while loop to do factorial here

int main()
{
	int n, i, fact;
	cout<<"Enter a num n :"<<endl;
	cin>>n;
	i=2;
	fact=1;
	while(i<n+1)
	{
		fact=fact*i;
		i++;
	}
	cout<<"The factorial is "<<fact<<endl;
	return 0;
}