#include<iostream>
using namespace std;

bool search(int matrix[][4], int n, int m, int target) { // we can use matrix[][4] = (*matrix[4])
  int row = 0, col = n-1;

  while(row < m && col >= 0) {
    if(matrix[row][col] == target) {
      return true;
    }else if(matrix[row][row]>target) {
      col--;
    }else {
      row++;
    }
  }
  return false;
}

bool search2(int matrix[][4], int n, int m, int target) {
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(matrix[i][j] == target) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int n = 4, m = 4, target = 10;
  int matrix[4][4] = {{1, 2, 3, 4},
                  {5, 6, 7, 8},
                  {9, 10, 11, 12},
                  {13, 14, 15, 16}};

  cout << search2(matrix, n, m, target);
  return 0;
}