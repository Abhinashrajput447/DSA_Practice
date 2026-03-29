#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <unordered_set>
// #include <unordered_map>
// #include <algorithm>
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
  // Take 5 input name and prinout them 
  // string name1, name2, name3, name4, name5;
  // // cin >> name1 >> name2 >> name3 >> name4 >> name5;

  
  // getline(cin, name1);
  // getline(cin, name2);
  // getline(cin, name3);
  // getline(cin, name4);
  // getline(cin, name5);

  // cout << name1 << name2 << name3 << name4 << name5 << endl;
  vector<string> name(5);
  for(int i=0; i<5; i++) {
    getline(cin, name[i]);
  }

  for(int i=0; i<5; i++) {
    cout << name[i] << " ";
  }
  cout << endl;
  return 0;
}