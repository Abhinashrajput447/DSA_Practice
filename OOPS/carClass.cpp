#include<iostream>
using namespace std;

class Car {
public:
  string name;
  int price;
  int seat;
  string type;
  int speed;

  Car() {  // default constructor 

  }

  Car( int p, string n,string t, int s) { // paramitirize constructor 
    name = n;
    price = p;
    seat = s;
    type = t;
  } 

  Car( int p, string n, string t, int s, int sp) { // paramitirize constructor 
    name = n;
    price = p;
    seat = s;
    type = t;
    speed = sp;
  } 

};

void print(Car c) {
  cout << c.name << " " << c.price << " "<< c.type << " " << c.seat << endl;
}

void change(Car& c) {
  c.name = "WW";
  c.price = 92000;
}

int main() {
  // Car c1(99999, "Oddi", "soul", 4);
  // c1.name = "Abhi";  // over-Writing 

  // print(c1);
  // change(c1);  
  // print(c1);

  // Car c2;  
  // c2.name = "Mercidge";
  // c2.price = 1500000;
  // c2.seat = 2;
  // c2.type = "Smd";

  Car c3(99999, "Oddi", "soul", 4);
  print(c3);

  // cout << c2.name << " " << c2.price << " "<< c2.type << " " << c2.seat << endl;
  return 0;
}