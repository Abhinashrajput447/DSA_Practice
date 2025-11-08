#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

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
