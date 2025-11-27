#include<iostream>
using namespace std;

int noOfDig(int arr[][3], int n, int m) {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(arr[i][j] == 7) {
        cnt++;
      }
    }
  }
  return cnt;
}

void sumOfSndRow(int nums[][3], int n, int m) {
  int sum = 0;
  for(int i=0; i<m; i++) {
    sum += nums[1][i];
  }
  cout << sum;
}

void transPose(int arr[][3], int n, int m) {
  int arr2[n][m];
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      arr2[i][j] = arr[j][i];
    }
  }

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cout << arr2[i][j] << " ";
    }
    cout << "\n";
  }
}

int main() {
  // int n = 2, m = 3;
  // int arr[2][3] = {
  //     {4, 7, 8},
  //     {8, 8, 7}
  // };
  int nums[3][3]={{1,4,9},
                {11,4,3},
                {2,2,3}};

  transPose(nums, 3, 3);
  // cout << noOfDig(arr, n, m);
  return 0;
}
