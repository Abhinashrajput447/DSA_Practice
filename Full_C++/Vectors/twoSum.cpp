#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

//Optimal Solution => using two LOOP when condition match ans will return 
//Time Complexity => O(n) , Space Complexity => O(n)
/* In this solution we are using unordered_map => because unordered Map stores 
Key Value Pairs using unordered_map<key, value> map */

vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> hash;
  for(int i=0; i<nums.size(); i++) {
    int curr = nums[i];
    int x = target-curr;

    if(hash.find(x) != hash.end()) {
      return {i, hash[x]};
    }
    hash[nums[i]] = i;
  }
  return {};
}

//Brute froce => using two LOOP when condition match ans will return 
//Time Complexity => O(n^2) , Space Complexity => O(1)
vector<int> twoSum2(vector<int>& nums, int target) {
  int n = nums.size();
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(nums[i]+nums[j] == target) return {i, j};
    }
  }
  return {};
}

int main() {
  vector<int> nums = {1, -2, 6, 3, 5, 3, 4};
  vector<int> ans = twoSum2(nums, 7); //vector type
  //Need to use for loop beacase we are printing the value from vector 
  for(int x : ans) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}