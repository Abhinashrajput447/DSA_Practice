#include <iostream>
using namespace std;

int main() {
  int n;
    cout << "Enter size of the array: ";
  cin >> n;

  if (n < 2) {
    cout << "Array must have at least two elements\n";
    return 0;
  }

  int arr[n];
  cout << "Enter elements of the array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int max1, max2;
  bool foundSecond = false;

  max1 = arr[0], max2 = arr[1];  
  // if (arr[0] > arr[1]) {
  //   max1 = arr[0];
  //   max2 = arr[1];
  //   foundSecond = true;
  // } else if (arr[1] > arr[0]) {
  //   max1 = arr[1];
  //   max2 = arr[0];
  //   foundSecond = true;
  // } else {
  //   max1 = arr[0];
  // }

  if(arr[0] < arr[1]) swap(max1, max2);

  for (int i = 2; i < n; i++) {
    if (arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
      foundSecond = true;
    } else if (arr[i] < max1 && (!foundSecond || arr[i] > max2)) {
      max2 = arr[i];
      foundSecond = true;
    }
  }

  cout << "Maximum: " << max1 << endl;
  if (foundSecond)
    cout << "Second Maximum: " << max2;
  else
    cout << "No second maximum (all elements are same)";

  return 0;
}
