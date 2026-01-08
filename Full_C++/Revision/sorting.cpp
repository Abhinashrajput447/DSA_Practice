#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void bubbleSort(vector<int>& nums) {
  int n = nums.size();
  for(int i=0; i<n-1; i++) {
    for(int j=0; j<n-i-1; j++) {
      if(nums[j] > nums[j+1]) {
        swap(nums[j], nums[j+1]);
      }
    }
  }
}

void print(vector<int>& nums) {
  for(int i=0; i<nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void selectionSort(vector<int>& nums) {
  int n = nums.size();
  // int minIdx = 0;
  for(int i=0; i<n-1; i++) {
    int minIdx = i;
    for(int j=i+1; j<n; j++) {
      if(nums[minIdx] > nums[j]) {
        minIdx = j;
      }
    }
    swap(nums[minIdx], nums[i]);
  }
}

int main() {
  vector<int> nums = {5, 3, 6, 1, 2, 3};
  bubbleSort(nums);
  print(nums);
  return 0;
}