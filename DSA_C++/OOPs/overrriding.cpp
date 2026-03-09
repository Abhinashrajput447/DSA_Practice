#include<iostream>
#include<vector>
using namespace std;

class Scooty {
public:
  int topSpedd;
  float milage;

  virtual void sound() {
    cout << "Vroom Vroom" << endl;
  }

private:
  int bootSpace;
};

class Bike : public Scooty {
public:
  int gears;

  virtual void sound() {
    cout << "Dhroom Dhroom" << endl;
  }

};

class SuperBike : public Scooty {
public:
  virtual void sound() {
    cout << "Zroom Zroom" << endl;
  }

};

int main() {
  Scooty* b = new Bike();  // Object pointer
  b -> sound();

  Scooty* c = new SuperBike();  // Object pointer
  c -> sound();

  vector<Scooty*> v;
  // b->gears = 5;
  // cout << b -> gears << "\n";

  // Scooty* s = new Scooty;
  // s -> sound();
  return 0;
}