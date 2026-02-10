#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Finding the second largest number 
// Time Complexity => O(n)
int secondLargest(vector<int>& arr) {
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

// Checking the number is prime or not
// Time Complexity => O(n)
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

// Fibbonacci Number
// Time Complexity => O(N!)
int fibnacci(int n) {
  if(n == 0) return 0;
  return fibnacci(n-1)+fibnacci(n-2);
}

int main() {
  cout << fibnacci(7);
}