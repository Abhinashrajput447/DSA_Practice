#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
using namespace std;

int main() {
  unordered_set<int> nums = {10, 20, 30, 40};
  unordered_multiset<int> multi = {10, 10, 10, 40};
  multiset<int> ml = {10, 10, 10, 40};
  set<int> s = {10, 20, 30, 40};
  vector<int> v = {10, 20, 30, 40};

  cout << "for unordered_set: ";
  for(auto x : nums) cout << x << " ";
  cout << "\nset: ";
  for(auto x : s) cout << x << " ";
  cout << "\nvector: ";
  for(auto x : v) cout << x << " ";
  cout << "\nmultiset : ";
  for(auto m : ml) cout << m << " ";
  cout << "\nmulti: ";
  for(auto ml : multi) cout << ml << " ";
  return 0;
}
