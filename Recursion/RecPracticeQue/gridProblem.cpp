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

int main() {
  string ans;
  cout << ways(0, 0, 4, 4, ans);
  return 0;
}