#include<iostream>
using namespace std;

// Count how many time target appears in given 2-D matrix
// Time Complexity => O(n^2) 
int noOfDig(int arr[][3], int n, int m, int target) {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(arr[i][j] == target) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Sum of row Elements  
// Time Complexity => O(n) 
void sumOfSndRow(int nums[][3], int n, int m) {
  int sum = 0;
  int idx = 0;
  for(int i=0; i<m; i++) {
    sum += nums[idx][i];
  }
  idx++;
  cout << sum << "\n";
  cout << idx << "\n";
}

// Transpose of a given 2-D matrix
// Time Complexity => O(n^2) 
void transPose(int arr[][3], int n) {
  int arr2[3][n];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      arr2[j][i] = arr[i][j];
    }
  }

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < n; j++) {
      cout << arr2[i][j] << " ";
    }
    cout << "\n";
  }
}


int main() {
  int n = 2, m = 3;
  int arr[2][3] = {
      {4, 7, 8},
      {8, 8, 7}
  };
  // int nums[3][3]={{1,4,9},
  //               {11,4,3},
  //               {2,2,3}};

  transPose(arr, 2);
  // cout << noOfDig(arr, n, m, 7);

  // sumOfSndRow(arr, n, m);
  return 0;
}
