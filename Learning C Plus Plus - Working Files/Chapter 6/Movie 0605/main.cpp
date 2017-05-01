#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*const double pi = 3.14159265;
    cout << pi * 3;
    cout << 3/2 << endl;
    cout << 3/2.0 << endl;*/
    int number;
    double rate;
    number = 2;
    rate = 1.0345;
    number = rate;
    cout << number << endl; // narrowing conversion
    rate = 2; // widening conversion
    // implicit conversion
    // explicit conversion - type cast
    number = (int)rate;
    rate = (double)number;
    cout << rate << endl;
    return 0;
}
