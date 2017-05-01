#include <iostream>

using namespace std;

int main()
{
    /*int number, factorial;
    cout << "Enter a number: ";
    cin >> number;
    factorial = 1;
    for(int i = number; i >= 1; --i) {
       factorial *= i;
       cout << factorial << endl;
    }
    cout << number << "! equals " << factorial << endl;*/
    int data1, data2, data3;
    cout << "Enter the first number: ";
    cin >> data1;
    cout << "Enter the second number: ";
    cin >> data2;
    cout << "Enter the third number: ";
    cin >> data3;
    for(int i = 1; i <= data1; ++i)
       cout << "*";
    cout << " " <<  data1 << endl;
    for(int i = 1; i <= data2; ++i)
       cout << "*";
    cout << " " << data2 << endl;
    for(int i = 1; i <= data3; ++i)
       cout << "*";
    cout << " " << data3 << endl;
    return 0;
}
