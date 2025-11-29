#include<iostream>
using namespace std;

void oddOrEven(int n) {
  if(n & 1) {
    cout << "odd"; 
  }else{
    cout << "even";
  }
}

int main() {
  oddOrEven(195453);
  return 0;
}