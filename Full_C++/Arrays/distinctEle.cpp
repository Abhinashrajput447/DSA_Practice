#include<iostream>
using namespace std;

bool distinct(int *arr, int n) {
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(arr[i] == arr[j]) {
        return true;
      } 
    }
  }
  return false;
}

bool distinct2(int *arr, int n) {
  int st = 0, end = n-1;

  while(st < end) {
    if(arr[st] == arr[end]) return true; st++; end--;
  }
  return false;
  
}
int main() {
  int arr[5] = {1, 2, 3, 5, 0};
  int n = 5;
  cout << distinct2(arr, n);
  return 0;
}