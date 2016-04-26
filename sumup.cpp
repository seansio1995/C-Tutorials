#include <iostream>
using namespace std;
// sum up function
int main()
{
	float sum=0;
	while(true)
	{
		float num;
		cout<<"Enter a number:"<<endl;
		cin>>num;
		if (num!=0.0)
		{
			sum+=num;
		}
		else
		{
			break;
		}
	}

	cout<<"The sumup result is "<<sum<<endl;
	return 0;
}