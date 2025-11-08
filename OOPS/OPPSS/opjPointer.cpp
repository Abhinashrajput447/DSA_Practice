#include<iostream>
using namespace std;

class Cricketer {
public:
  string name;
  int runs;
  float avg;
  
  Cricketer(string name, int runs, float avg) {
    this -> name = name;
    this -> runs = runs;
    this -> avg  = avg;
  }

  // void print() {
  //   cout << this -> name << " " <<  this -> runs << " " << this -> avg ;
  // }
};

// void change(Cricketer& c) {  // Using pass by reference 
//   c.avg = 75; 
// }

void change(Cricketer& c) {  // Using Pointer
  // (*c).avg = 75; 
  c.avg = 47;
  // c.avg = 45;   // false
}

int main() {
  Cricketer c1("Abhiansh", 2000, 30.45);

  Cricketer* p = &c1;

  // p -> name = "Abhi";  // using arrow function and pointer 
  // p -> avg = 45;

  // (*p).name = "Life-sync";
  // cout << p -> runs << "\n";
  change(c1);

  cout << c1.avg << endl;
  // c1.print();
  // p -> print();
  return 0;
}