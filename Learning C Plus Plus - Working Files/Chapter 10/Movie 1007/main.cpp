#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

void buildVector(vector<int> &vect) {
    srand(time(NULL));
    for(int i = 1; i <= 1000; ++i)
       vect.push_back(rand() % 1000 + 1);
}

int searchVector(vector<int> vect, int value) {
    /*for(int i = 0; i < vect.size(); ++i)
        if (vect[i] == value)
            return i;
    return -1;*/
    int found = -1;
    found = vect.at(value);
    return found;
}

int main()
{
    vector<int> numbers;
    buildVector(numbers);
    int found, item;
    cout << "Enter a value to search for: ";
    cin >> item;
    //found = searchVector(numbers, item);
    found = numbers.at(item);
    if (found > -1)
        cout << "Found the item at position: "
             << found << endl;
    else
        cout << "Didn't find item in vector."
             << endl;
    return 0;
}
