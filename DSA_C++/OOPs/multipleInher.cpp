#include<iostream>
using namespace std;

class Cricketer {
public:
  int runs;
  int wickets;
  int avg;
};

class Engineer {
public:
  int exp;
  string domain;
};

//Multiple inheritance
class Phodu : public Engineer, public Cricketer {  
public : 
  string hobby;
};

int main() {
  Phodu p1;
  p1.runs = 999;
  p1.exp = 2;
  p1.avg = 45.7;

  cout << p1.runs;
  return 0;
}