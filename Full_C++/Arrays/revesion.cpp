#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// chaeck duplicate is present or not 
// Time Compleity => O(n) and Space complexity => O(1)
bool check(vector<int>& nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());

  for(int i=1; i<n; i++) {
    if(nums[i-1] == nums[i]){
      return true;
    }
  }
  return false;
}

// chaeck duplicate is present or not using set 
// Time Compleity => O(n) and Space complexity => O(n)
bool check2(vector<int>& nums) {
  unordered_set<int> s;

  for(int x : nums) {
    if(s.count(x)) {
      return true;
    }
    s.insert(x);
  }
  return false;
}

// using unorderd map
//Time Compleity => O(n) and Space complexity => O(n)
void ck(vector<int>& nums) {
  unordered_map<int, int> map;

  for(int x : nums) {
    map[x]++;
  }

  for(auto &p : map) {
    cout << p.first << " -> " << p.second << endl;
  }
  // cout << endl;
}

int main() {
  // vector<int> nums = {1, 2, 3, 4};
  vector<int> nums = {1, 2,3, 1, 5, 6, 7};
  // cout << check2(nums);
  ck(nums);
  return 0;
}