#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<double, int>p1, pair<double, int>p2) {
  return p1.first > p2.first; // descending based on ratio 
}

int fractionalKnacspack(vector<int> val, vector<int> wt, int totCap) {  // T.C => O(NlongN)
  int n = val.size();
  vector<pair<double, int>> ratio(n, make_pair(0.0, 0));   // pair(ratio, idx) -> (double, int)

  for(int i=0; i<n; i++) {
    double r = val[i]/(double)wt[i]; 
    ratio[i] = make_pair(r, i);
  }
  sort(ratio.begin(), ratio.end(), compare);  // T.C => O(NlongN)

  int ans = 0;
  for(int i=0; i<n; i++) {
    int idx = ratio[i].second;
    if(wt[idx] <= totCap) {
      ans += val[idx];
      totCap -= wt[idx];
    }else{
      ans += (ratio[i].first*totCap);
      totCap = 0;
      break;
    }
  }
  cout << "max value = " <<  ans;
  return ans;
}

int main() {
  vector<int> value = {60, 100, 120};
  vector<int> weight = {10, 20, 30};
  int totCap = 50;

  fractionalKnacspack(value, weight, totCap);
  return 0;
}