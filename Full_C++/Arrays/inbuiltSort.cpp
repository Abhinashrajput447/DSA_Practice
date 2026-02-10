#include<iostream>
#include<algorithm>
using namespace std;

void print(int *arr, int n) {
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[5] = {4, 2, 5, 1, 3};
  sort(arr+2, arr+5, greater<int>());
  // sort(arr+2, arr+5);
  print(arr, 5);
  return 0;
}