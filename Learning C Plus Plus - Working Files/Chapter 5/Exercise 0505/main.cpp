#include <iostream>

using namespace std;

int main()
{
    /*string firstName, lastName;
    cin >> firstName >> lastName;
    cout << firstName << " " << lastName << endl;*/
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName << endl;
    return 0;
}
