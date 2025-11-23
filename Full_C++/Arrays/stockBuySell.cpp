#include<iostream>
using namespace std;

int maxProfit(int *arr, int n) {
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


int main() {
  int n = 6;
  int arr[n] = {7, 1, 5, 3, 6, 4};
  cout << maxProfit(arr, n);
  return 0;
}