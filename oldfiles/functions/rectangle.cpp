#include <iostream>
using namespace std;

class Rectangle {
private:
	float length;
	float width;
public:
	Rectangle(): length(5), width(5){}
	Rectangle(float l, float w): length(l), width(w){}
	void getLength()
	{
		cout<<"Enter the length: "<<endl;
		cin>>length;
	}

	void getWidth()
	{
		cout<<"Enter the width: "<<endl;
		cin>>width;
	}

	float get_area()
	{
		return length*width;
	}

	float get_perimeter()
	{
		return (length+width)*2;
	}

};

int main()
{
	Rectangle r1(20,10);
	float tmp=r1.get_area();
	cout<<"The area is "<<tmp<<endl;
	return 0;
}