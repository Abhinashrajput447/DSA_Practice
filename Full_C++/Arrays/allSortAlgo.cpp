#include<iostream>
using namespace std;

void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
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
      if(arr[j] < arr[minIdx]) {
        minIdx = j;
      }
      cout <<"i : "<< i << " -> " << "j : "<< j << " -> ";
      print(arr, n);
    }
    swap(arr[i], arr[minIdx]); 
    cout << "[ " << arr[i] << ", " << arr[minIdx] << " ]\n";cout << endl;
  }
  // print(arr, n);
}

//Swap function pass by reference
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

//Partition Functino 
int partition(int arr[], int low, int high) {
  //Choose the pivot
  int pivot = arr[high];

  // Index of smaller element and indicates 
  // the right position of pivot found so far
  int i = low - 1;

  for(int j=low; j<=high-1; j++) {
    if(arr[j] < pivot) {
      i++;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[i+1], &arr[high]);
  return i+1;
}

void quickSort(int arr[], int low, int high) {
  if(low < high) {
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
  }
}

int main() {
  int n = 5;
  int arr[n] = {3, 2, 4, 1, 5};
  // quickSort(arr, 0, n-1);
  // print(arr, n);
  selectionSort(arr, n);
  return 0;
}