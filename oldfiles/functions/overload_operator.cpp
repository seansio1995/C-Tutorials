#include <iostream>
using namespace std;

class Temp
{
private:
	int count;
public:
	Temp():count(5){}
	void operator ++()
	{
		count+=3;
	}

	void operator &()
	{
		count*=2;
	}

	void display()
	{
		cout<<"Count now: "<<count<<endl;
	}
};

int main()
{
	Temp tmp;
	tmp.display();
	++tmp;
	tmp.display();
	++tmp;
	tmp.display();
	&tmp;
	tmp.display();
	return 0;
}