#include<iostream>
using namespace std;

//Printing the given array 
//Time Complexity => O(n);
void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//Insersition sort code 
//Time Complexity => O(n^2);
void insertionSort(int arr[], int n) {
  print(arr, n);
  for(int i=1; i<n; i++) {
    int curr = arr[i];
    int prev = i-1;
    while(prev >= 0 && arr[prev] > curr) {
      swap(arr[prev], arr[prev+1]); // swapping the prev and prev+1 element
      cout << "Swapped Numbers are " << arr[prev] << "<-->" << arr[prev+1] << "\n"; // printing the swapped elements in each swap 
      print(arr, n);  // printing the whole array which changes 
      prev--;
    }
    arr[prev+1] = curr;  // updating the array 
  }
  // print(arr, n);
}

int main() {
  int n = 5;
  int arr[n] = {4, 2, 5, 1, 3};
  insertionSort(arr, n);
  return 0;
}