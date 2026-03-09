#include<iostream>
using namespace std;

class Car {
public:
  string name;
  int price;
  int seat;
  string type;

  // Constructor  Default Constructor
  Car() {   //False 
    name = "bmw";
    price = 0;
    seat = 7;
    type = "b";
  }

  //paramitirize constructor 
  Car(string s, int p , int st, string t) {
    name = s;
    price  = p;
    seat = st;
    type = t;
  }
};


int main() {
  Car c1("Bmw", 9999, 7, "Soal");
  Car c2;

  cout << c1.name << " " << c1.price << " " << c1.seat << " " << c1.type << endl;

  cout << c2.name << " " << c2.price << " " << c2.seat << " " << c2.type << endl;
  
  return 0;
}