#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


vector<int> sumZero(vector<int>& nums) {
  int n = nums.size();
  unordered_map<int, int> mp;

  for(int i=0; i<n; i++) {
    int need = -nums[i];

    if(mp.find(need) != mp.end()) {
      return {mp[need], i};
    }

    mp[nums[i]] = i;
  }
  return {};
}

int main() {
  vector<int> nums = {1, -2, +3, 9, -4, -9}; 

  vector<int> ans = sumZero(nums);

  if(!ans.empty()) {
    cout << ans[0] << ", " << ans[1] << endl;
    cout << nums[ans[0]] << ", "<< nums[ans[1]] << endl;
  }else{
    cout << "pair not found\n";
  }
  return 0;
}