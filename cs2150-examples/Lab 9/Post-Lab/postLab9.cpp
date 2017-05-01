//Robert Alexander, RMA3MZ, postLab9 inheritance file
#include <string>
#include <iostream>
using namespace std;

class Person{
public:
  Person(string n);
  ~Person();
private:
  string name;
};

Person::Person(string n){
  name=n;
}

Person::~Person(){
  cout<<"calling ~Person filler code."<<endl;
}

class Teacher: public Person{
public:
  Teacher(string n,int o);
  ~Teacher();
private:
  int office;
};

Teacher::Teacher(string n, int o):Person(n){
  office=o;
}

Teacher::~Teacher(){
  cout<<"calling ~teacher filler code"<<endl;
}

int main(){
  Teacher t("Bloomfield", 403);
  return 0;
}
