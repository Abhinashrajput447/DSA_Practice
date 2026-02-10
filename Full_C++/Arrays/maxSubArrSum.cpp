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
  int cnt = 0;
  for(int i=0; i<n; i++) {
    int currSum = 0;
    for(int j=i; j<n; j++) {
      cnt++;
      cout << "currSum = " << currSum << ", " << "maxSum = " << maxSum << "\n";
      currSum += arr[j];
      maxSum = max(maxSum, currSum);
    }
  }
  cout << "maxSum = " << maxSum << ",   cnt = " << cnt;
}

void maxSubArrSum3(int *arr, int n) {
  int maxSum = INT32_MIN, currSum = 0;
  for(int i=0; i<n; i++) {
    currSum += arr[i];
    cout << "currSum = " << currSum << ", " << "maxSum = " << maxSum << "\n";
    if(currSum < 0) {
      currSum = 0;
    }else {
      maxSum = max(maxSum, currSum);
    }
  }
  cout << maxSum;
}

int sum(int *arr, int n) {
  int s;
  for(int i=0; i<n; i++) {
    s+=arr[i];
  }
  return s;
}

int main() {
  int n = 10;
  int arr[n] = {2, -1, 3, 4, 5, 8, -17, 3, 8, 10};
  maxSubArrSum3(arr, n);
  cout << "_____________________________\n";
  cout << sum(arr, n);
  return 0;
}