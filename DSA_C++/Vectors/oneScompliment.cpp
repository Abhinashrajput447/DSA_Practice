#include<iostream>
using namespace std;

int getIthBit(int n, int i) {
  int bitMask = 1 << i;

  if (n & bitMask)
    return 1;
  else
    return 0;
}

int setBitMask(int n, int i) {
  int bitMask = 1 << i;
  return (n | bitMask);
}

int clearIthBit(int n, int i) {
  int bitMask = ~(1 << i);
  return (n & bitMask);
}

bool powerOf2(int n) {
  return(n&(n-1))== 0;
}

void oddOrEven(int n) {
  if(n & 1) {
    cout << "odd"; 
  }else{
    cout << "even";
  }
}

void allPrimes(int n) {
  for(int i=2; i<=n; i++) {
    bool isPrime = true;

    for(int j=2; j*j<=i; j++) {
      if(i % j == 0) {
        isPrime = false;
        break;
      }
    }
    if(isPrime) {
      cout << i << " ";
    }
  }
}

void updateIthBit(int num, int i, int val) {
  num = num & ~(1 << i); // clear ith bit 
  num = num | (val << i);

  cout << num << endl;
}

void clearIBits(int num, int i) {
  int bitMask = (~0) << i;
  num = num & bitMask;

  cout << num << endl;
}

int countSetBits(int num) {
  int cnt = 0;

  while(num > 0) {
    int ld = num & 1;
    cnt += ld;

    num = num >> 1;
  }

  return cnt;
}

int fastExpenention(int x, int n) {
  int ans = 1;

  while(n > 0) {
    int lastBit = n & 1;
    if(lastBit) {
      ans = ans*x;
    }
    x = x*x;
    n = n>>1;
  }
  return ans;
}

int inverse(int n) {
  return  n & -n;
}

int main() {
  cout << inverse(-1);
  return 0;
}