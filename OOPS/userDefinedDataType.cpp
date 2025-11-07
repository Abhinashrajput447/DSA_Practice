#include<iostream>
using namespace std;

class Student {
public: 
  string name;
  float cgpa;
  int rNo;
  float salary;
};

int main() {
  Student s1;
  s1.name = "Abhinash";
  s1.cgpa = 9.5;
  // s1.rNo = 21;
  cin >> s1.rNo;
  s1.salary = 98000;

  cout << s1.name << " " << s1.cgpa << " " << s1.rNo << " " << s1.salary  << endl;

  Student s2;
  s2.name = "Abhinash";
  s2.cgpa = 9.5;
  s2.rNo = 21;
  s2.salary = 981000;
  cout << s2.name << " " << s2.cgpa << " " << s2.rNo << " " << s2.salary;
  return 0;
}