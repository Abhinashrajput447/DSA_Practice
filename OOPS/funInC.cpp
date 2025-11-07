#include<iostream>
using namespace std;


class Cri{
public:
  string name;
  int runs;
  float avg;

  Cri(string name, int runs, float avg) {
    this -> name = name;
    this -> runs = runs;
    this -> avg = avg;
  }

  void show(string name) {   // Function inside the class 
    this-> name = "Abhi";
    cout << this->name << " " << this->runs << " " << this->avg << endl;

    cout << name;
  }

  int matches() {
    return runs / avg;
  }

};

void print(Cri& c) {   // pass by reference
  c.name = "Abhiansh Rajput";
  cout << c.name << " " << c.runs << " " << c.avg << endl;
}


int main() {
  Cri c1("Abhinash", 2000, 30.90);

  c1.show("Abhinash raj");  //Function calling 
  
  // print(c1);
  cout << c1.matches();

  return 0;
}