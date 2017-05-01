#include <iostream>
using namespace std;

struct person {
	char name[50];
	float age;
	float wage;
};


int main()
{
	person p;
	person* ptr;
	ptr=&p;
	cout<<"Enter the name: "<<endl;
	cin.getline(p.name,50);
	cout<<"Enter the age: "<<endl;
	cin>>p.age;
	cout<<"Enter the wage: "<<endl;
	cin>>p.wage;
	cout<<endl<<"Your name is "<<ptr->name<<endl;
	cout<<"Your age is "<<ptr->age<<endl;
	cout<<"Your wage is "<<ptr->wage<<endl;
	return 0;
}