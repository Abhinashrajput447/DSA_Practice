#include<iostream>
#include<limits>
using namespace std;

int maxProfit(int *arr, int n) {  // TC => O(n)
  int bestBuy = arr[0];
  int maxPro = 0;

  for(int i=0; i<n; i++) {
    bestBuy = min(bestBuy, arr[i]);

    if(arr[i] > bestBuy) {
      maxPro = max(maxPro, arr[i]-bestBuy);
    }
  }
  return maxPro;
}

int maxProfit2(int *arr, int n) {  // TC => O(2n)
  int bestBuy[100000]; 
  bestBuy[0] = INT32_MAX;
  int maxProfit = 0;

  for(int i=1; i<n; i++) {
    bestBuy[i] = min(bestBuy[i-1], arr[i-1]);
  }
  for(int i=0; i<n; i++) {
    maxProfit = max(maxProfit, arr[i]-bestBuy[i]);
  }
  return maxProfit;
}


int main() {
  int n = 6;
  int arr[n] = {7, 1, 5, 3, 6, 4};
  cout << maxProfit2(arr, n);
  return 0;
}