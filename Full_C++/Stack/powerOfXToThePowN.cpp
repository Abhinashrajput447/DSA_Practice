#include <iostream>
using namespace std;

double myPow(double x, int n) {
  double ans = 1.00;
  long long exp = n;

  if(exp < 0) {
    x = 1/x;
    exp = -exp;
  }

  while(exp > 0) {
    if(exp % 2 != 0) {
      ans *= x;
    }
    x *= x;
    exp /= 2;
  }
  return ans;
}

int main() {
  cout << myPow(2, -4);
  return 0;
}