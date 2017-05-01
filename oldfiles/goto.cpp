/*
go to statement is harmful in mordern programming
but I still would like to test the validity of itself
good luck
*/

#include <iostream>
using namespace std;

int main()
{
	int n,i;

	float sum=0;
	cout<<"Enter the maximum numbers to sum:"<<endl;
	cin>>n;
	for( i=1;i<=n;i++)
	{
		float num;
		cout<<"Enter the num"<<i<<":"<<endl;
		cin>>num;
		if(num<0.0)
		{
			goto jump;
		}
		sum+=num;

	}

	jump:
	float aveg=sum/(i-1);
	cout<<"The average of the sum is "<<aveg<<endl;

	return 0;
}