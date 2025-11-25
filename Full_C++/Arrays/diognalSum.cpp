#include<iostream>
using namespace std;

int diognalSum(int matrix[][4], int n, int m) {
  int sum = 0;
  for(int i=0; i<n; i++) {
    // for(int j=0; j<m; j++) {
      sum += matrix[i][i] + matrix[i][n-i-1];
    // }
  }
  if(n%2 != 0) {
    sum -= matrix[n/2][n/2];
  }
  return sum;
}

int main() {
  int n = 4, m = 4;
  int matrix[4][4] = {{1, 2, 3, 4}, 
                    {5, 6, 7, 8}, 
                    {9, 10, 11, 12},  
                    {13, 14, 15, 16}};
                  
  cout << diognalSum(matrix, n, m);
  return 0;
}