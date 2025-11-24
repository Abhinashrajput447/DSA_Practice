#include<iostream>
using namespace std;

void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void countSort(int *arr, int n) {
  int freq[100000];  // range
  int minVal = INT32_MAX, maxVal = INT32_MIN;
  for(int i=0; i<n; i++) {
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }

  //1st step
  for(int i=0; i<n; i++) {
    freq[arr[i]]++;
  }

  //2nd step
  for(int i=minVal, j=0; i<=maxVal; i++) {
    while(freq[i] > 0) {
      arr[j++] = i;
      freq[i]--;
    }
  }

  print(arr, n);
}

int main() {
  int n = 5;
  int arr[n] = {4, 2, 5, 1, 3};
  countSort(arr, n);
  return 0;
}