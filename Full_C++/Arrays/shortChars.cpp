#include<iostream>
using namespace std;

void print(char *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void charSort(char* ch, int n) {
  for(int i=1; i<n; i++) {
    int curr = ch[i];
    int prev = i-1;

    while(prev >= 0 && ch[prev] < curr) {
      swap(ch[prev] , ch[prev+1]);
      prev--;
    }

    ch[prev+1] = curr;
  }
  print(ch, n);
}


int main() {
  char ch[6] = {'a','c','d','l','p','t'};
  charSort(ch, 6);
  return 0;
}