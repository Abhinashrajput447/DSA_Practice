#include <iostream>
#include <vector>
using namespace std;

int minNumberOfCoins(vector<int> coins, int v) {
  int n = coins.size();
  int ans = 0;
  for(int i=n-1; i>=0 && v > 0; i--) {
    if(v >= coins[i]) {
      ans += v/coins[i];
      v %= coins[i];
    }
  }
  return ans;
}

int main() {
  vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int v;
  cin >> v;
  cout << minNumberOfCoins(coins, v);
}