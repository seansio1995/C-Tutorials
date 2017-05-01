#include <iostream>

using namespace std;

void Heading(string name, string date)
{
    cout << "*****************************************" << endl;
    cout << "* Name: " << name << "\t\t\t" << "*" << endl;
    cout << "* Date: " << date << "\t\t\t" << "*" << endl;
    cout << "*****************************************" << endl;
}

int main()
{
    Heading("Mike McMillan", "02/28/2011");
    return 0;
}
