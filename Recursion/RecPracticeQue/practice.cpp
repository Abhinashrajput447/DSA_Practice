#include <iostream>
#include <vector>
using namespace std;

// Factorial 
int f(int n) { 
  if(n == 1) return 1;
  // int fact = 1;
  return n * f(n - 1);
}

// Sum of n numbers
int sum(int n) {
  if(n == 0) return 0;

  return n + sum(n-1);
}

// Print Numbers From 1 to N 

void print1ToN(int n) {
  if(n == 0) return;

  print1ToN(n-1);
  cout << n << " ";
}

// Print Numbers From N to 1

void print1ToN2(int n) {
  if(n == 0) {
    return;
  }

  cout << n << " ";
  print1ToN2(n-1);
}

void fibo(int n) {
  int a = 0, b = 1;
  for(int i=1; i<=n; i++) {
    int temp = a+b;
    a = b;
    b = temp;
    cout << a <<  " ";
  }
  
}

int fibo2(int n) {
  if(n == 0 || n == 1) {
    return n;
  }

  return fibo2(n-1) + fibo2(n-2); 
}

//Digit Counting 
int cnt(int n) {
  if(n == 1) { // Base Case
    return 1;
  }

  int c = 0;
  return c + n%10 ;
  cnt(n/10);
}

// Reverse a number
void nums(int n) {
  if(n == 0) {
    return;
  }

  int num = 0;
  num = num * 10 + n % 10;
  cout <<  num;
  nums(n / 10);
}

// reverse a string 
void str(string s, int n) {
  if(n == -1) return;
  cout << s[n];
  str(s, n-1);
}

int wave(int arr[]) {
  int n = sizeof(arr) / sizeof(arr[0]);

  return n;
}

int main() {
  int arr[] = {3, 2,1, 4, 5};
  cout << wave(arr);
  return 0;
}
