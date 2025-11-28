#include <iostream>
using namespace std;

void func() {
  int arr[100] = {1, 2, 3, 4, 5};
  for(int i=0; i<5; i++) {
    cout << arr[i] << " ";
  }
  return;
}

void func2() {
  int size;
  cin >> size;

  int *arr = new int(size);
  int a = 1;
  for(int i=0; i<size; i++) {
    arr[i] = a;
    cout << arr[i] << " ";
    a++;
  }
  cout << endl << size;
  delete [] arr; // free space
}

void func3() {
  int *ptr = new int;
  *ptr = 5;
  cout << *ptr;
  delete ptr;
}
int main() {
  func3();
  
}