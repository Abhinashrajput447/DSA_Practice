#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++) cin >> arr[i];

  if(n < 2) {
    cout << "Array must contain at least two elements\n";
    return 0;
  }

  int min1 = arr[0], min2 = arr[1];

  if(min2 < min1) swap(min1, min2);

  for(int i = 2; i < n; i++) {
    if(arr[i] < min1) {
      min2 = min1;
      min1 = arr[i];
    } else if(arr[i] > min1 && (arr[i] < min2 || min1 == min2)) {
      min2 = arr[i];
    }
  }
  cout << "Minimum: " << min1 << endl;

  if(min1 == min2)
    cout << "All elements are same";
  else
    cout << "Second minimum: " << min2;

  return 0;
}
