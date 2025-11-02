#include<iostream>
#include<cmath>
using namespace std;

int main() {
  long long n;
  cin >> n;

  // n = abs(n);  // this is for negative number

  n = (n < 0) ? -n : n;  // here we acn use ternary operator

  int sum = 0;
  while(n != 0) {
    int ld = n%10;
    sum += ld;
    n /= 10;
  }
  cout << sum;
  return 0;
}