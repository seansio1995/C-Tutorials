#include <iostream>

using namespace std;

int square(int number)
{
    int squared = number * number;
    return squared;
}


int main()
{
    int number, squared;
    cout << "Enter a number: ";
    cin >> number;
    cout << number << " squared equals " << square(number) << endl;
    return 0;
}
