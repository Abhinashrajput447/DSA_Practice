#include <iostream>
#include <vector>
using namespace std;

int getMinChange(vector<int> coins, int v) {  // TC => O(n)
  int n = coins.size();
  int ans = 0;
  for(int i=n-1; i>=0 && v > 0; i--) {
    if(v >= coins[i]) {
      ans += v/coins[i];
      cout << coins[i] << " ";
      v %= coins[i];
    }
  }
  cout << "\n" << ans << endl;
  return ans;
}

int main() {
  vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
  int v;
  cin >> v;
  cout << getMinChange(coins, v);
}