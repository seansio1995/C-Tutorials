#include <iostream>

using namespace std;

void swap(int& num1, int& num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int number1, number2;
    number1 = 13;
    number2 = 12;
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    swap(number1, number2);
    cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    return 0;
}
