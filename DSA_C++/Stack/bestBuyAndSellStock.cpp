#include <iostream>
#include <vector>
using namespace std;

int bestBuyAndSell(vector<int>& p) {
  int n = p.size();
  int bestBuy = p[0];
  int maxProfit = 0;

  for(int i=1; i<n; i++) {
    bestBuy = min(bestBuy, p[i]);

    if(p[i] > bestBuy) {
      maxProfit = max(maxProfit, p[i]-bestBuy);
    }
  }
  return maxProfit;
}

int main() {
  vector<int> p = {7, 1, 5, 4, 6};

  cout << bestBuyAndSell(p);
  return 0;
}