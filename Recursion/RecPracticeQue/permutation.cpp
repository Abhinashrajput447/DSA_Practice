#include <iostream>
#include <vector>
using namespace std;

void permute(string str, int idx) {
  int n = str.size();

  if(idx == n) {
    cout << str << endl;
    return;
  }

  for(int i=idx; i<n; i++) {
    // swap the value 
    swap(str[idx], str[i]);
    //recurse for the next position 
    permute(str, idx+1);
    // backtracking (undo swap)
    swap(str[idx], str[i]);
  }
}

void permute3(string str, string ans) {
  int n = str.size();
  if(n == 0) {
    cout << ans << endl;
    return;
  }
  
  for(int i=0; i<n; i++) {
    char ch = str[i];
    string nextStr = str.substr(0, i) + str.substr(i+1, n-i-1);
    permute3(nextStr, ans+ch);
  }
}

void print(vector<int> nums) {
  for(int x : nums) {
    cout << x << " ";
  }
  cout << endl;
}

void permute2(vector<int>& nums, int idx) {
  int n = nums.size();
  if(idx == n) {
    print(nums);
    
    return;
  }

  for(int i=idx; i<n; i++) {  
    // swap
    swap(nums[idx], nums[i]);

    // recurse for the new position 
    permute2(nums, idx+1);

    // backtracking(undo swap);
    swap(nums[idx], nums[i]);
  }
}


int main() {
  string str = "abc";
  string ans = "";
  permute3(str, ans);
  // vector<int> nums = {1, 2, 3};
  // permute2(nums, 0);
  return 0;
}