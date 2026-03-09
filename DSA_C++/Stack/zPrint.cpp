#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(vector<int>& nums) {
  int n = nums.size();

  for(int i=0; i<n-1; i++) {
    int minIdx = i;
    for(int j=i+1; j<n; j++) {
      if(nums[minIdx] > nums[j]) {
        minIdx = j;
      }
    }
    swap(nums[minIdx], nums[i]);
  }

  for(int i=0; i<n; i++) {
    cout << nums[i] << " ";
  }
}

int main() {
  vector<int> nums = {-1, 5, -2, 3, 5};

  selectionSort(nums);
  
  return 0;
}