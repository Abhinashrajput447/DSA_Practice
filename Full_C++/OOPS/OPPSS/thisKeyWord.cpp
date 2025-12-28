#include<iostream>
using namespace std;

class Cricketer {
public:
  string name;
  int runs;

  Cricketer(string name, int runs) {
    this -> name = name;
    this -> runs = runs;
  }

};

void print(Cricketer c) {
  cout << c.name << " " << c.runs << endl;
}

int main() {
  // Cricketer c1;
  // c1.name = "Virat Kohli";
  // c1.runs = 27000;

  Cricketer c1("Virat Kohli", 27000);
  print(c1);

  Cricketer c2("Rohit Sharma", 18000);
  print(c2);

  // cout << c1.name << " " << c1.runs << endl;

  return 0;
}