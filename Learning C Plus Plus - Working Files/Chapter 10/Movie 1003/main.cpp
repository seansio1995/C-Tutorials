#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> names;
    names.push_back("David");
    names.push_back("Raymond");
    names.push_back("Cynthia");
    names[0] = "David";
    names[1] = "Raymond";
    names[2] = "Cynthia";
    vector<int> numbers(1000,0);
    return 0;
}
