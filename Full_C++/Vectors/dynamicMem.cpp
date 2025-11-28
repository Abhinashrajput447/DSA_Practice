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

  int *arr = new int[size];
  int a = 1;
  for(int i=0; i<size; i++) {
    arr[i] = a;
    cout << arr[i] << " ";
    a++;
  }
  // cout << endl << size;
  delete[] arr; // free space
  cout << size;
}

void func3() {
  int *ptr = new int;
  *ptr = 5;
  cout << *ptr;
  delete ptr;
}

int* func4() {
  int *ptr = new int;
  *ptr = 1200;
  cout << "ptr points to " << *ptr << endl;
  return ptr;
}


// 2D Dynamic Arrays 
void twoDdynamic(int rows, int cols) {
  int* *matrix = new int*[rows];

  for(int i=0; i<rows; i++) {
    matrix[i] = new int[cols];
  }

  int x = 1;
  for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
      matrix[i][j] = x++;
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  cout << matrix[2][1] << "\n";
  cout << *(*(matrix+2)+1) << endl;
}

int main() {
  int rows, cols;
  cin >> rows >> cols;
  twoDdynamic(rows, cols);
  return 0;
}