#include<iostream>
using namespace  std;
void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void selectionSort(int *arr, int n) {  // TC => O(n^2)
  for(int i=0; i<n-1; i++) {
    int minIdx = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[minIdx]) {
        minIdx = j;
      }
    }
    swap(arr[i], arr[minIdx]);
  }
  print(arr, n);
}

int main() {
  int n = 5;
  int arr[n] = {4, 2, 5, 1, 3};
  selectionSort(arr, n);
  return 0;
}
