#include<iostream>
using namespace std;

void printSubArrays(int *arr, int n) {
  for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
      for(int k=i; k<=j; k++) {
        cout << arr[k];
      }
      cout << ",";
    }
    cout << "\n";
  }
}


int main() {
  int n = 5;
  int arr[n] = {1,2,3,4,5};

  printSubArrays(arr, n);
  return 0;
}