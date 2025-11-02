#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int arr[5] = {1,2,3,4,5};
  int n = 5;

  // for(int i=n-1; i>=0; i--) {
  //   cout << arr[i] << " ";
  // }

  int st = 0, end = n-1;
  while(st < end) {
    swap(arr[st], arr[end]);
    st++; end--;
  }

  for(int x : arr) {
    cout << x << " ";
  }
  return 0;
}
