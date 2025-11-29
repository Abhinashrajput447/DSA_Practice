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

void oddOrEven(int n) {
  if(n & 1) {
    cout << "odd"; 
  }else{
    cout << "even";
  }
}

int main() {
  cout << clearIthBit(6, 1) << endl;
  return 0;
}