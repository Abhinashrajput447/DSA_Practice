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


//2nd veriation of job sequesncing problem 
//By using class for index => which job i have done first with maxProfit

class Job {
public:
  int idx;
  int dedline;
  int profit;

  //paramitirized constructor
  Job(int idx, int dedline, int profit) {
    this -> idx = idx;
    this -> dedline = dedline;
    this -> profit = profit;
  }
};

int maxJobProfit(vector<pair<int, int>> pairs) {
  int n = pairs.size();
  vector<Job> jobs;

  for(int i=0; i<n; i++) {
    jobs.emplace_back(i, pairs[i].first, pairs[i].second);
    // i => idx, pairs[i].first => Dedline, pairs[i].second => Profit
  }

  sort(jobs.begin(), jobs.end(), [](Job &a, Job &b) { // lamda Function
    return a.profit > b.profit;
  });

  cout << "Selecting Job = " << jobs[0].idx << endl;
  int profit = jobs[0].profit;
  int safeDedline = 2;

  for(int i=1; i<n; i++) {
    if(jobs[i].dedline >= safeDedline) {
      cout << "Selecting Job = " << jobs[i].idx << "\n";
      profit += jobs[i].profit;
      safeDedline++;
    }
  }
  cout <<"max profit = " << profit << endl;
  return profit;
}
int main() {
  int n = 4;
  vector<pair<int, int>> jobs(n, make_pair(0, 0));
  jobs[0] = make_pair(4, 20);
  jobs[1] = make_pair(1, 10);
  jobs[2] = make_pair(1, 30);
  jobs[3] = make_pair(1, 40);

  maxJobProfit(jobs);
  return 0;
}