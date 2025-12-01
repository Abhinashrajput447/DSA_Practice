#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <math.h>
using namespace std;

int sqOfTwoNo(int a, int b) {
  return (a*a)+(b*b)+(2*a*b);
}

bool palineDrome(int n) {
  int original = n;
  int rev = 0;
  while(n!=0) {
    int ld = n % 10;
    rev = (rev*10)+ld;
    n /= 10;
  }
  return original == rev;
}

int sumOfDigit(int n) {
  int sum = 0;
  while(n!=0) {
    int ld = n % 10;
    sum += ld;
    n /= 10;
  }
  return sum;
}

int sumOfDigit2(int n) {
  if(n==0) return 0;

  return (n % 10 )+ sumOfDigit2(n / 10);
}

int countEvenDigitInAnumber(int n) {
  int cnt = 0;
  while(n != 0) {
    int ld = n % 10;
    if(ld % 2 == 0) {
      cnt++;
    }
    n /= 10;
  }
  return cnt;
}

int sum(int n) {
  if(n == 1) return 1;
  return n+sum(n-1);
}

int secondLargest(int *arr, int n) {
  int lar1 = INT_MIN, lar2 = INT_MIN;
  for(int i=0; i<n; i++) {
    if(lar1 < arr[i]) {
      lar2 = lar1;
      lar1 = arr[i];
    }

    if(arr[i] > lar2 && lar1 > arr[i]) {
      lar2 = arr[i];
    }
  }
  return lar2;
}

int fact(int n) {
  if(n == 1) return 1;
  return n * fact(n-1);
}

bool strong(int n) {
  int original = n;
  int st = 0;
  while(n != 0) {
    int ld = n % 10;
    st += fact(ld);
    n /= 10;
  }
  return original == st;
}

string removeVowels(string s) {
  int n = s.length();
  string p;
  for(int i=0; i<n; i++) {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
      continue;
    }else{
      p.push_back(s[i]);
    }
  }
  return p;
}

int reverse(int n, int rev = 0) {
  if(n == 0) return rev;
  return reverse(n / 10, rev * 10 + n % 10);
}

int main() {
  int n = 5;
  int arr[n] = {1,22 , 3, 14, 5};
  // string s;
  // getline(cin, s);

  cout << reverse(45);
  return 0;
}