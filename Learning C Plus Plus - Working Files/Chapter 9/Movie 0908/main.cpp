#include <iostream>
#include <vector>
using namespace std;


int main()
{
    /*int grade1, grade2, grade3, grade4, grade5;
    double average;
    int numGrades = 5;
    cout << "Enter the first grade: ";
    cin >> grade1;
    cout << "Enter the second grade: ";
    cin >> grade2;
    cout << "Enter the third grade: ";
    cin >> grade3;
    cout << "Enter the fourth grade: ";
    cin >> grade4;
    cout << "Enter the fifth grade: ";
    cin >> grade5;
    average = (grade1 + grade2 + grade3 + grade4 + grade5)
              / numGrades;
    cout << "The average is " << average << endl;*/
    vector<int> grades;
    int grade, total;
    double average;
    total = 0;
    for(int i = 1; i <= 5; ++i) {
        cout << "Enter a grade: ";
        cin >> grade;
        grades.push_back(grade);
    }
    for(int i = 0; i < grades.size(); ++i)
       total += grades[i];
    average = total / grades.size();
    cout << "The average is " << average << endl;
    return 0;
}
