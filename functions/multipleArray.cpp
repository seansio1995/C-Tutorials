#include <iostream>
using namespace std;

void display(int arr[3][2]);

int main()
{
	int num[3][2]={{1,2},{3,4},{5,6}};
	display(num);
	return 0;
}


void display(int arr[3][2])
{
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
}