#include <iostream>
#include <vector>
using namespace std;

void occurrences(vector<int>& nums, int key) {
  int n = nums.size();

  for(int i=0; i<n; i++) {
    if(nums[i] == key) {
      cout << i << " ";
    }
  }
}

void occurrences2(vector<int>& nums, int key, int i) {
  int n = nums.size();
  if(i == n) return;

  if(nums[i] == key) {
    cout << i << " ";
  }

  occurrences2(nums, key, i+1);
}

int main() {
  vector<int> nums = {3,2,4,5,6,2,7,2,2};
  occurrences2(nums, 2, 0);
  return 0;
}