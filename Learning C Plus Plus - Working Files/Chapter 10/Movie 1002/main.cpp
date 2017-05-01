#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names(10,"a");
    for(int i = 0; i < names.size(); ++i)
       cout << i << ": " << names[i] << endl;
    return 0;
}
