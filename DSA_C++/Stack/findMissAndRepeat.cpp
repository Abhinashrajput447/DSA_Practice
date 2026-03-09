#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

vector<int> findMissAndRepeat(vector<vector<int>>& grid) {
  int n = grid.size();
  unordered_set<int> seen;
  int totalSum =((n*n)*(n*n+1))/2;

  int gridSum = 0;
  int a = -1;
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      gridSum += grid[i][j];

      if(seen.count(grid[i][j])) {
        a = grid[i][j];
      }else{
        seen.insert(grid[i][j]);
      }
    }
  }
  int missNum = totalSum + a - gridSum;
  return {a, missNum};
}

int main() {
  vector<vector<int>> grid = {{1, 2, 3}, {3, 4, 5}, {6, 7, 8}};
  vector<int> ans = findMissAndRepeat(grid);

  for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  };
  // cout << grid[0].size();
}