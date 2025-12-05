#include<iostream>
#include <string>
using namespace std;

class Student {
  string name;
  int roll;
public:
  //properties
  float cgpa;

  void getPercentage() {
    cout << (cgpa*10) <<"%" << endl;
  }

  //setters
  void setName(string newName) {
    name = newName;
  }

  string getName() {
    return name;
  }
};

class user {
public: 
  int id;
  string username;
  string password;
  string bio;

  void deactivae() {
    cout << "deleting accound\n";
  }

  void editBio(string newBio) {
    bio = newBio;
  }
};

void print(Student s) {
  cout << s.getName() << endl;
  // cout << s.roll << endl;
  cout << s.cgpa << endl;
}


class CuteGirl {
private:
  string name;
  int age;
public:
  int marks;

  ///setters
  void setName(string NewName) {
    name = NewName;
  }

  string getName() {
    return name;
  }
};



class Car {
  string name;
  string color;

public:
  Car(string nameVal, string colorVal) {
    cout << "constructor without paramitiries\n";
    
  }

  // Car(string name, string color) {
  //   this -> name = name;
  //   this -> color = color;
  // }

  void start() {
    cout << "car has started.\n";
  }

  void stop() {
    cout << "car has stoped\n";
  }

  string getName() {
    return name;
  }
};

class User {
  int id;
  string password = "abhinash";

public:
  string userName;

  //paramitirize constructor

  // User(int id, string password) {
  //   this -> id = id;
  //   this -> password = password;
  // }

  //setters
  void setId(int id) {
    this -> id = id;
  }
  // getter
  int getId() {
    return id;
  }


  //setter Password
  void setPassword(string password) {
    this -> password = password;
  }

  string getPassword() {
    return password;
  }

  bool open(string inputPassword) {
    return inputPassword == password;
  }
};

class BMW {
public:
  string name;
  string color;
  int *milage;

  // BMW(string name, string color) { //paramitirized constructor
  //   this -> name = name;
  //   this -> color = color;
  // }

  BMW(string name, string color) {
    this -> name = name;
    this -> color = color;
    milage = new int; // Dynamic allocation
    *milage = 12;
  }


  // BMW(BMW &original) {
  //   cout << "coping constructor to new .. \n";
  //   name = original.name;
  //   color = original.color;
  //   milage = new int;
  //   *milage = *original.milage;
  // }


  // destructor 
  // ~BMW() { // its automatically created
  //   cout << "deleating object..\n";

  //   if(milage != NULL) {
  //     delete milage;
  //     milage = NULL;
  //   }
  // }
};

class Animal{
public:
  string color;

  void eat() {
    cout << "eats..\n";
  }

  void breathe() {
    cout << "breathes\n";
  }
};

class Fish: public Animal {  // this is called single inheritance 
public: 
  int fins;

  void swim() {
    cout << "swims\n";
  }
};

class Whele : public Fish { // Multilavel inheritance 
public: 
  int speed;

  void getSpeed() {
    cout << "speed\n";
  }

};

class Bike {
public:
  string name;
  int speed;

  void getName() {
    cout << "name\n";
  }

  void getSpeed() {
    cout << "Speed\n";
  }
};

class Apache {
public:
  string color;

  void getColor() {
    cout << "Color\n";
  }
};

class Bugati : public Bike, public Apache {
public:
  string country;

  void getCountry() {
    cout << "German\n";
  }
};

class Man {
public:
  string name;
  int age;
};

class Abhinash : public Man{
public: 
  string address;
};

class Print {
public:
  void show(int x) {
    cout << "int : " << x << endl;
  }

  void show(string str) {
    cout << "int x: " << str << endl;
  }
};

class Complex {
  int real;
  int img;  
public:
  Complex(int r, int i) {
    real = r;
    img = i;
  }

  void showComplex() {
    cout << real << " + " << img << "i\n";
  }


  //operator overloading 
  Complex operator - (Complex &c2) {
    int resReal = this -> real - c2.real;
    int resImg = this -> img - c2.img;
    Complex c3(resReal, resImg);
    // c3.showComplex();
    return c3;
  }
};

//operaor overloading for substraction 
// class Complex1 {
//   int real;
//   int img;
// public:
//   Complex1(int r, int i) {
//     this -> real = r;
//     this -> img = i;
//   } 

//   void showCompex1() {
//     cout << real  << " - " << img <<"i\n";
//   }

//   Complex1 operator - (Complex &c2) {
//     int resReal = this -> real - c2.real;
//     int resImg = this -> img - c2.img;
//     Complex c3(resReal, resImg);
//     // c3.showComplex();
//     return c3;
//   }
// };

// class Parent {
// public:
//   void show() {
//     cout << "Parent class show\n";
//   }

//   virtual void hello() {
//     cout << "parent hello \n";
//   }
// };

// Function overriding 
// class Child : public Parent {
// public:
//   void show() {
//     cout << "Child class show...\n";
//   }

//   void hello() {
//     cout << "child hello \n";
//   }
// };


//Abstraction 
class Shape {
public:
  virtual void draw() = 0; // abstract fnc, pure virtual function
};

class Circle : public Shape {
public:
  void draw() {
    cout << "draw circle ..\n";
  }
};

class Squre : public Shape {
public:
  void draw() {
    cout << "draw squre..\n";
  }
};
 

void counter() {
  static int count = 0; // for life time exist 
  count++;
  cout << "count : " << count << endl;
};

class Example {
public:
  Example() {
    cout << "Constructor ..\n";
  }

  ~Example() {
    cout << "destrcutor ..\n";
  }
};

class A {
  string secret = "secrt data";
  friend class B;
  friend void revelSecret(A &obj);
  
};

class B {
public:
  void showSecret(A &obj) {
    cout << obj.secret << "\n";
  }
  friend class revelSecret;
};

void revelSecret(A &obj) {
  cout << obj.secret << endl;
}

class Parent {
public:
  Parent() {
    cout << "constructor of parent \n"; 
  }
  ~Parent() {cout << "Destrcutor of Parent\n";}
};

class Child : public Parent {
public:
  Child() {
    cout << "constructor of Child \n"; 
  }
  ~Child() {cout << "Destrcutor of Child\n";}
};

int main() {
  Child ch1;
  return 0; 
}