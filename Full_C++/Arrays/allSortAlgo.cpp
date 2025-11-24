#include<iostream>
using namespace std;

void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void countSort(int *arr, int n) {
  int freq[100000];
  int minVal = INT32_MAX, maxVal = INT32_MIN;

  for(int i=0; i<n; i++) {
    freq[arr[i]]++;
    minVal = min(minVal, arr[i]);
    maxVal = max(maxVal, arr[i]);
  }

  for(int i=maxVal, j=0; i>=minVal;  i--) {
    while(freq[i] > 0) {
      arr[j++] = i;
      freq[i]--;
    }
  }
  print(arr, n);
}


void bubbleSort(int *arr, int n) {
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-i-1; j++) {
      if(arr[j] < arr[j+1]) {
        swap(arr[j], arr[j+1]);
      }
    }
  }
  print(arr, n);
}

void insertionSort(int *arr, int n) {
  for(int i=1; i<n; i++) {
    int curr = arr[i];
    int prev = i-1;
    while(prev >= 0 && arr[prev] < curr) {
      swap(arr[prev], arr[prev+1]);
      prev--;
    }
    arr[prev+1] = curr;
  }
  print(arr, n);
}

void selectionSort(int arr[], int n ) {
  for(int i=0; i<n-1; i++) {
    int minIdx = i;

    for(int j=i+1; j<n; j++) {
      if(arr[j] > arr[minIdx]) {
        minIdx = j;
      }
    }
    swap(arr[i], arr[minIdx]);
  }
  print(arr, n);
}

int main() {
  int n = 10;
  int arr[n] = {3,6,2,1,8,7,4,5,3,1};
  countSort(arr, n);
  return 0;
}