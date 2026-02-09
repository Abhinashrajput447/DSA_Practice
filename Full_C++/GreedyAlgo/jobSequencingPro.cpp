#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxJobSchediling(vector<pair<int, int>> jobs) {
  int n = jobs.size();
  sort(jobs.begin(), jobs.end(), [](auto &a, auto &b) {
    return a.second > b.second;
  });

  //first => dedline and second => profit
  int profit = jobs[0].second;
  int safeDedline = 2;
  for(int i=1; i<n; i++) {
    if(jobs[i].first > safeDedline) {
      profit += jobs[i].second;
      safeDedline++;
    }
  }
  return profit;
}

int main() {
  int n = 4;
  vector<pair<int, int>> jobs(n, make_pair(0, 0));
  jobs[0] = make_pair(4, 20);
  jobs[1] = make_pair(1, 10);
  jobs[2] = make_pair(1, 30);
  jobs[3] = make_pair(1, 40);

  cout << maxJobSchediling(jobs);
  return 0;
}