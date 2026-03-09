#include<iostream>
using namespace std;

class Cricketer {
public:
  string name;
  int runs;

  Cricketer(string name, int runs) {  // using this pointer 
    this -> name = name;
    this -> runs = runs;
  } 

};
void print(Cricketer& c) {
  // cout << this -> name << " " << this -> runs ;
  c.runs = 999;
  // cout << c.name << " " << c.runs ;
}

int main() {
  Cricketer c1("Abhinash", 3000);
  // Cricketer* p = &c1;

  // c1.print();
  // cout << c1.runs;

  print(c1);  // function call must important 
  cout << c1.runs << endl;
  cout << c1.runs << endl;
  cout << &c1.runs;
  return 0;
}