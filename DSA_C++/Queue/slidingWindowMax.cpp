#include <iostream>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

vector<int> slidingWindowMax(vector<int>& nums, int k) {
  deque<int> dq;
  vector<int> ans;

  for(int i=0; i<nums.size(); i++) {
    //Creat a window of K size usign deque
    if(!dq.empty() && dq.front() == i-k) {
      dq.pop_front();
    }

    //Store only max elements in deque
    while(!dq.empty() && nums[dq.back()] < nums[i]) {
      dq.pop_back();
    }

    //Store current index of queue
    dq.push_back(i);

    //window
    if(i >= k-1) {
      ans.push_back(nums[dq.front()]);
    }
  }
  return ans;
}

int main() {
  vector<int> nums = {1, -2, 3, 4, -1, 7, -2, 6, 8};

  vector<int> arr = slidingWindowMax(nums, 3);

  for(auto x : arr) {
    cout << x << " ";
  }
  return 0;
}