#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int secLar(vector<int>& arr) {
  int lar1 = INT32_MIN, lar2 = INT32_MIN;
  for(int x : arr) {
    if(lar1 < x) {
      lar2 = lar1;
      lar1 = x;
    }else if(lar1 < x && x > lar2) {
      lar2 = x;
    }
  }

  if(lar2 == INT32_MIN) {
    return -1;
  }
  return lar2;
}

bool prime(int n){
  for(int i=2; i<n; i++) {
    if(n%i == 0) {
      return false;
    }else {
      return true;
    }
  }
  return true;
}

int fib(int n) {
  if(n == 0) return 0;

  return fib(n-1)+fib(n-2);
}

int main() {
  cout << fib(7);
}