#include <iostream>
using namespace std;

struct person
{
	char name[50]="Sean Xiao";
	float wage=36.4;
	int age=21;

};
//in class initialization is C++ 11 extension
void display(person p);
int main()
{
	person p;
	// cout<<p.name<<endl;
	// cout<<p.age<<endl;
	// cout<<p.wage<<endl;
	display(p);
	return 0;
}

void display(person p)
{
	cout<<p.name<<endl;
	cout<<p.age<<endl;
	cout<<p.wage<<endl;
}