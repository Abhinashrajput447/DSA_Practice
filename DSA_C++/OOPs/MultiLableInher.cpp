#include<iostream>
using namespace std;

//multi lable inheritance

class Vehicle {  // parents
public:
  int topSpedd;
  float milage;
  string fuel;

};

class TwoWheeler : public Vehicle {
public:
  bool disBreak;
};

class FourWheeler : public TwoWheeler {
public:
  bool sunRoof;
  int seat;
};

class EightWheeler : public FourWheeler {
public:
  int size;
};


int main() {
  EightWheeler e1;
  e1.disBreak = false;

  cout << e1.disBreak;
  return 0;
}