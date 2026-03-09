#include<iostream>
#include<vector>
using namespace std;

vector<int> findPeaks(vector<int>& m) { // m = mountain
  int n = m.size();
  vector<int> peaks;

    for(int i=1; i<n-1; i++) {
      if(m[i] > m[i-1] && m[i] > m[i+1]) {
        peaks.push_back(i);
      }
    }
  return peaks;
}

int main() {
  int n; cin >> n;
  vector<int> m(n);
  for(int i = 0; i < n; i++) {
    cin >> m[i];
  }

  vector<int> ans = findPeaks(m);

  for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << " ";
  }
  return 0;
}