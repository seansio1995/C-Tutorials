#include <iostream>
using namespace std;

int main()

{
	int n1,n2;
	char oper;
	cout<<"Enter n1: "<<endl;
	cin>>n1;
	cout<<"Enter n2: "<<endl;
	cin>>n2;
	cout<<"Enter the operator: "<<endl;
	cin>>oper;

	switch (oper){
		case '+':
		cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
		break;

		case '-':
		cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
		break;

		case '*':
		cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
		break;

		case '/':
		cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
		break;

		case '%':
		cout<<n1<<" % "<<n2<<" = "<<n1%n2<<endl;
		break;
	}
	return 0;
}