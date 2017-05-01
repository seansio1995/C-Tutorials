#include <iostream>

using namespace std;

int square(int number)
{
    int squared = number * number;
    return squared;
    // return number * number;
}

int main()
{
    int number, squared;
    cout << "Enter a number: ";
    cin >> number;
    squared = square(number);
    cout << squared << endl;
    return 0;
}
