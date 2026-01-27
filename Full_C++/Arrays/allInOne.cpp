#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
using namespace std;

bool isPalindrome(string s) {
  string ans = "";
  for(char c : s) {
    if(isalnum(c)) {
      ans += tolower(c);
    }
  }
  string orgStr = ans;
  reverse(ans.begin(), ans.end());
  string rev = ans;
  return rev == orgStr;
}

void reverseString(string& s) {
  int i=0, j=s.size()-1;

  while(i < j) {
    swap(s[i], s[j]);
    i++;j--;
  }
}

void reverseChar(vector<char>& s) {
  int i=0, j=s.size()-1;

  while(i < j) {
    swap(s[i++], s[j--]);
  }
}

void moveZero(vector<int>& nums) {
  int n = nums.size();
  int cnt = 0;
  vector<int> ans;

  for(int i=0; i<n; i++) {
    if(nums[i] != 0) {
      ans.push_back(nums[i]);
    }else{
      cnt++;
    }
  }

  while(cnt--){
    ans.push_back(0);
  }

  nums = ans;
}

int removeDuplicate(vector<int>& nums) {
  int n = nums.size();
  int k = 0;

  for(int i=0; i<n; i++) {
    bool isDuplicate = false;

    for(int j=0; j<n; j++) {
      if(nums[i] == nums[j]) {
        isDuplicate = true;
        break;
      }
    }

    if(!isDuplicate) {
      nums[k] = nums[i];
      k++;
    }
  }
  return k;
}


int removeDuplicate2(vector<int>& nums) {
  unordered_set<int> seen;
  vector<int> ans;

  for(int i=0; i<nums.size(); i++) {
    if(seen.find(nums[i]) == seen.end()) {
      seen.insert(nums[i]);

      ans.push_back(nums[i]);
    }
  }
  return ans.size();
}

vector<int> rotateNonneg(vector<int>& nums, int k) {
  vector<int> nonNeg;
  for(int x : nums) {
    if(x >= 0) {
      nonNeg.push_back(x);
    }
  }

  int n = nonNeg.size();
  if(k == 0) return nums;
  k %= n;
  if(n <= 0) return nums;

  reverse(nonNeg.begin(), nonNeg.begin()+k);
  reverse(nonNeg.begin()+k, nonNeg.end());
  reverse(nonNeg.begin(), nonNeg.end());

  int idx = 0;
  for(int i=0; i<nums.size(); i++) {
    if(nums[i] >= 0) {
      nums[i] = nonNeg[idx++];
    }
  }

  return nums;
}

int main() {
  vector<int> nums = {-1, 5, -8, 6, -9, -9};
  
  // vector<int> ans = rotate(nums);
  rotateNonneg(nums, 7);

  for(auto x : nums) {
    cout << x << " ";
  }
}