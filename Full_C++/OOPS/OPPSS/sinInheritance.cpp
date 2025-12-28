#include<iostream>
using namespace std;

class Scooty  {  // Parent class
public: 
  int topSpedd;
  float milage;

private:
  int bootSpace;
};

class Bike : public Scooty {  // class Bike extents Scooty / derived / child class
public:
  int gears;

  // paramitirize constructor

  // Bike(int topSpeed, float milage, int gears) {    
  //   this -> topSpedd = topSpedd;
  //   this -> milage = milage;
  //   this -> gears = gears;
  // }

  void print() {
    cout << this -> milage << " " << this -> topSpedd << " " << this -> gears << endl;
  }
};

int main() {
  // Bike b1(199, 45.6, 5); // for Constructor
  Bike b1;
  b1.milage = 45.4;
  b1.topSpedd = 200;
  b1.gears = 5;

  // cout << b1.gears;

  b1.print();
  return 0;
}