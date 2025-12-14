#include <iostream>
#include <vector>
using namespace std;

int ways(int row, int col, int n, int m, string ans) { // TC => 2^(n+m)
  if(row == n-1 && col == m-1) {
    cout << ans << "\n";
    return 1;
  }

  if(row >= n || col >= m) {
    return 0;
  }

  int v1 = ways(row, col+1, n, m, ans+'R');
  int v2 = ways(row+1, col, n, m, ans+'D');

  return v1+v2;
}

int fact(int n) {
  if(n == 1) return 1;
  return n * fact(n-1);
}

int ways2(int n, int m) {
  int p = fact((n-1) + (m-1));
  int q = fact(n-1)*fact(m-1);
  return p/q;
}

int main() {
  // string ans;
  cout << ways2(2, 1);
  // cout << fact(5);
  return 0;
}