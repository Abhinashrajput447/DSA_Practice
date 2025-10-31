#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool containDuplicate(vector<int>& nums) {
  unordered_set<int> seen;
  for(int num : nums) {
    if(seen.count(num)) {
      return true;
    }
    seen.insert(num);
  }
  return false;
}
int main() {
  vector<int> nums = {1,2,3,4};
  cout << (containDuplicate(nums) ? "contains Duplicate" : "no Duplicate");
  return 0;
}