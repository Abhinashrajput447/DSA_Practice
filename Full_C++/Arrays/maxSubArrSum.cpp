#include<iostream>
using namespace std;

void maxSubArrSum(int *arr, int n) {
  int maxSum = INT32_MIN;
  for(int i=0; i<n; i++) {
    for(int j=i; j<n; j++) {
      int currSum = 0;
      for(int k=i; k<=j; k++) {
        currSum += arr[k];
      }
      cout << currSum << ",";
      maxSum = max(maxSum, currSum);
    }
    cout << "\n";
  }
  cout << maxSum;
}

void maxSubArrSum2(int *arr, int n) {
  int maxSum = INT32_MIN;
  for(int i=0; i<n; i++) {
    int currSum = 0;
    for(int j=i; j<n; j++) {
      currSum += arr[j];
      maxSum = max(maxSum, currSum);
    }
  }
  cout << maxSum;
}

void maxSubArrSum3(int *arr, int n) {
  int maxSum = INT32_MIN, currSum = 0;
  for(int i=0; i<n; i++) {
    currSum += arr[i];
    if(currSum < 0) {
      currSum = 0;
      
    }else {
      maxSum = max(maxSum, currSum);
    }
  }
  cout << maxSum;
}

int main() {
  int n = 9;
  int arr[n] = {-2,1,-3,4,-1,2,1,-5,4};
  maxSubArrSum2(arr, n);
  return 0;
}