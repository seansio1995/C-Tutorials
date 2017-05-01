#include <iostream>
#include <cmath>
using namespace std;

class Complex{
private:
	float real;
	float image;

public:
	Complex():real(0),image(0){}
	void read()
	{
		cout<<"Enter the real and image respectively:"<<endl;
		cin>>real>>image;
	}

	Complex add(Complex c1, Complex c2)
	{
		Complex temp;
		temp.real=c1.real+c2.real;
		temp.image=c1.image+c2.image;
		return temp;
	}

	Complex minus(Complex c1, Complex c2)
	{
		Complex temp;
		temp.real=c1.real-c2.real;
		temp.image=c1.image-c2.image;
		return temp;
	}

	Complex multiply(Complex c1, Complex c2)
	{
		Complex temp;
		temp.real=c1.real*c2.real-c1.image*c2.image;
		temp.image=c1.real*c2.image+c2.real*c1.image;
		return temp;
	}

	Complex divide(Complex c1, Complex c2)
	{
		Complex temp;
		temp.real=(c1.real*c2.real+c1.image*c2.image)/(pow(c2.real,2)+pow(c2.image,2));
		temp.image=(c1.image*c2.real-c1.real*c2.image)/(pow(c2.real,2)+pow(c2.image,2));
		return temp;
	}

	void display()
	{
		cout<<real<<" + "<<image<<"i"<<endl;
	}
};


int main()
{
	Complex c1,c2,c3;
	c1.read();
	c2.read();
	c1.display();
	c2.display();
	cout<<"After add operation:"<<endl;
	c3=c3.add(c1,c2); // add
	c3.display();
	cout<<"After minus operation:"<<endl;
	c3=c3.minus(c1,c2);
	c3.display();
	cout<<"After multiply operation:"<<endl;
	c3=c3.multiply(c1,c2);
	c3.display();
	cout<<"After divide operation:"<<endl;
	c3=c3.divide(c1,c2);
	c3.display();
	return 0;
}