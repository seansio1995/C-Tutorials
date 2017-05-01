#include <iostream>

using namespace std;

int main()
{
    /*int grade1, grade2, grade3;
    double average;
    const int numGrades = 3;
    grade1 = 74;
    grade2 = 82;
    grade3 = 88;
    average = (grade1 + grade2 + grade3) / numGrades;
    cout << average << endl;*/
    const double pi = 3.14159265;
    double circumference;
    int radius = 3;
    circumference = 2 * pi * radius;
    // many lines later
    double area;
    area = pi * (radius * radius);
    // many lines later
    double volume;
    volume = (4/3) * pi * (radius * radius * radius);

    return 0;
}
