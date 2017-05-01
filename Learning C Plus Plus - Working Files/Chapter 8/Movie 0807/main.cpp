#include <iostream>

using namespace std;

int main()
{
    string star = "*";
    for(int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << star;
        }
        cout << endl;
    }
    return 0;
}
