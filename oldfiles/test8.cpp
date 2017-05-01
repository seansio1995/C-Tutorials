#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	v.push_back(n);
	cout<<"The size of vector is "<<v.size()<<endl;
	return 0;
}