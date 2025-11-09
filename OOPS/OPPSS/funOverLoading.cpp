#include<iostream>
using namespace std;

class Loading {
public:
  void sum(string a, string b) {
    cout << a+b << endl;
  }

  void sum(int a, int b) {
    cout << a+b << endl;
  }

  void sum(int a, int b, int c) {
    cout << a+b+c << endl;
  }

  // int sum(int a, int b) {  // error
  //   return a+b;
  // }
  
};


int main() {
  Loading a;
  a.sum(4,6);
  a.sum(3,3,5);
  a.sum("Abhinash ", "Varsha");
  return 0;
}