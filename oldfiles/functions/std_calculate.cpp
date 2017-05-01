#include <iostream>
#include <cmath>
using namespace std;

float std_calculate(float data[], int n);

int main()
{
	int num;
	cout<<"Enter how many data do you want to insert: "<<endl;
	cin>>num;
	while(num>100 || num<0)
	{
		cout<<"Error enter the number again: "<<endl;
		cin>>num;
	}
	float data[100];
	for (int i=0;i<num;i++)
	{
		cout<<"Enter the number: ";
		cin>>data[i];
	}
	float standard_deviation=std_calculate(data,num);
	cout<<"The std is "<<standard_deviation<<endl;
	return 0;
}


float std_calculate(float data[], int n)
{
	float mean=0;
	for(int i=0;i<n;i++)
	{
		mean+=data[i];
	}
	mean=mean/n;

	float std=0;
	for(int i=0;i<n;i++)
	{
		std+=pow(data[i]-mean,2);
	}
	std=sqrt(std/n);
	return std;
}