#include<iostream>
using namespace std;

void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void bubbleSort(int *arr, int n) {
  for(int i=0; i<n-1; i++) {
    bool isSwap = false;
    for(int j=0; j<n-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
        isSwap = true;
      }
    }
    if(!isSwap) {
      break;
    }
  }
  print(arr, n);
}

int main() {
  int n = 5;
  int arr[n] = {4, 2, 5, 1, 3};
  bubbleSort(arr, n);
  return 0;
}