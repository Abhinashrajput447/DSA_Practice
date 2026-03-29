#include<iostream>
#include<algorithm>
using namespace std;

//Rotate the array by K position from right
//Time Compleity => O(n)
void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

void rotate(int *arr, int n, int k) {
  k = k%n;

  reverse(arr, arr+n);
  reverse(arr, arr+k);
  reverse(arr+k, arr+n);

  print(arr, n);
}

void rotate2(int *arr, int n, int k) { // O(N+N) => not solved
  k %= 10;

  int l = 0, r = n-1;
  int cnt = 0;

  while(cnt != k) { // O(N) 
    swap(arr[l], arr[r]);
    l++;r--;
    cnt++;
  }

  reverse(arr, arr+n); // O(N)
  print(arr, n);
}

int main() {
  int n = 7, k = 2;
  int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // reverse => {7, 6, 5, 4, 3, 2, 1} => swaps => {1, 2, 5, 4, 3, 6, 7} => 7, 6, 3, 
  rotate(arr, n, k);
  cout << endl;

  rotate2(arr, n, k);
  cout << endl;
  return 0;
}