#include<iostream>
#include<limits>
using namespace std;

int main() {
  int n;
  cin >> n;
  if(n<2) {
    cout << "Array must atlest grater than two\n";
    return 0;
  }

  int min1 = INT32_MAX;
  int min2 = INT32_MAX;
  int arr[n];

  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  for(int i=0; i<n; i++) {
    if(arr[i] < min1) {
      min2 = min1;
      min1 = arr[i];
    } else if(arr[i] > min1 && arr[i] < min2) {
      min2 = arr[i];
    }
  }

  cout << min1 << endl ;

  if(min2 == INT32_MAX) {
    cout << "All elements are same";
    return 0;
  }else{
    cout << min2 ;
  }
  return 0;
}