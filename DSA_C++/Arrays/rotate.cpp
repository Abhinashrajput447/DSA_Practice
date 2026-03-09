#include<iostream>
#include<algorithm>
using namespace std;

//Rotate the array by K position from right
//Time Compleity => O(n)
void rotate(int *arr, int n, int k) {
  k = k%n;
  reverse(arr, arr+n);
  reverse(arr, arr+k);
  reverse(arr+k, arr+n);

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n = 7, k = 2;
  int arr[7] = {1, 2, 3, 4, 5, 6, 7};
  rotate(arr, n, k);
  return 0;
}