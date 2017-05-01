#include <iostream>
using namespace std;


int sumOfElements(int A[])
{
	int i,sum=0;
	int size= sizeof(A)/sizeof(A[0]);
	cout<<"SOE:"<<endl;
	cout<<"size of A is "<<sizeof(A)<<endl;
	cout<<"size of A[0] is "<<sizeof(A[0])<<endl;

	for (int i=0;i<size;i++)
	{
		sum+=A[i];
	}
	return sum;
}


int main()
{
	int A[]={1,2,3,4,5};
	int total=sumOfElements(A);
	cout<<"Main:"<<endl;
	cout<<"size of A is "<<sizeof(A)<<endl;
	cout<<"size of A[0] is "<<sizeof(A[0])<<endl;
	cout<<"The sum of elements are "<<total<<endl;
	return 0;
}