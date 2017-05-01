#include <iostream>
#include <vector>

using namespace std;

class B1 {
    public:
    virtual void pvc() = 0;
};

class D1 : public B1 {
    public:
    void pvc() { cout << "D1::pvc() "; }
};

int main()
{
    D1 d;
    d.pvc();
    /*int grade1, grade2, grade3, grade4, grade5;
    double average;
    int numGrades = 5;
    cout << "Enter a grade: ";
    cin >> grade1;
    cout << "Enter a grade: ";
    cin >> grade2;
    cout << "Enter a grade: ";
    cin >> grade3;
    cout << "Enter a grade: ";
    cin >> grade4;
    cout << "Enter a grade: ";
    cin >> grade5;
    average = (grade1 + grade2 + grade3 + grade4 + grade5)
               / numGrades;
    cout << "The average is " << average << endl;
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
    cout << "The average is " << average << endl;*/
    return 0;
}
