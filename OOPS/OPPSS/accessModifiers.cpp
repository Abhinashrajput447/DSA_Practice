#include<iostream>
using namespace std;

class Student {
public:
  string name;
  int rNo;

  Student(string name, int rNo, float cgpa) {  // paramitirized constuctor
    this -> name = name;
    this -> rNo = rNo;
    this -> cgpa = cgpa;
  }

  // void display() {
  //   cout << this -> name << " " << this -> rNo << " " << this -> cgpa << "\n";
  // }

  float getCgpa() {  
    return cgpa;
  }

  void setCgpa(float m) {
    cgpa = m;
  }
private:
  float cgpa;
};

// 2nd type for printing
// here wec't access cgpa bcz cgpa in private modifiers

// void display(Student s) {
//   cout << s.name << " " << s.rNo << " " << s.cgpa << "\n";
// }


int main() {
  Student s1("Abhinash",21, 9.7);
  Student s2(s1);
  s1.setCgpa(9.8);

  s2.rNo = 88;

  cout << s1.getCgpa();

  // s1.cgpa();
  // s1.display();  // insize the class function
  // display(s1);  // 2nd type
  return 0;
}