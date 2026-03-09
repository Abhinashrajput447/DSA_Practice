#include <iostream>
#include <vector>
#include <string>
using namespace std;

int binToDec(int bin) {
  int ans = 0, pow = 1;

  while(bin != 0) {
    int ld = bin % 10;
    ans += ld*pow;
    pow *= 2;
  }
  return ans;
}

int main() {
  cout << binToDec(101);
  return 0;
}