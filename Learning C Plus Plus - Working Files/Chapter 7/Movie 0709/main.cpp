#include <iostream>

using namespace std;

int main()
{
    double operand1, operand2, result;
    char op;
    cout << "Enter an expression (operand1 operator operand2): ";
    cin >> operand1 >> op >> operand2;
    while (operand1 != 'q') {
       if (op == '*') {
          result = operand1 * operand2;
          cout << "result: " << result << endl;
       }
       else if (op == '/') {
          result = operand1 / operand2;
          cout << "result: " << result << endl;
       }
       else if (op == '+') {
          result = operand1 + operand2;
          cout << "result: " << result << endl;
       }
       else if (op == '-') {
          result = operand1 - operand2;
          cout << "result: " << result << endl;
       }
       else
          cout << "Bad expression." << endl;
       cout << "Enter an expression (operand1 operator operand2): ";
       cin >> operand1;
       if (operand1 != 'q')
          cin >> op >> operand2;
    }
    return 0;
}
