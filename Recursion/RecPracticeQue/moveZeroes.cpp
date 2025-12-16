#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeros(vector<int>& nums) {
  sort(nums.begin(), nums.end());

  for(int i=0; i<nums.size(); i++) {
    cout << nums[i];
  }
  cout << "\n";

  reverse(nums.begin(),nums.end());

  for(int i=0; i<nums.size(); i++) {
    cout << nums[i];
  }
}

void moveZeroes3(vector<int>& nums) {
  int n = nums.size();
  int moveZ = 0;

  for(int i=0; i<n; i++) {
    if(nums[i] != 0) {
      int temp = nums[moveZ];
      nums[moveZ] = nums[i];
      nums[i] = temp;
      moveZ++;
    }
  }
  for(int i=0; i<nums.size(); i++) {
    cout << nums[i];
  }
}

void moveZeros2(int arr[], int n) {
  sort(arr, arr+n);

  for(int i=0; i<n; i++) {
    cout << arr[i];
  }
  cout << "\n";

  reverse(arr,arr+n);

  for(int i=0; i<n; i++) {
    cout << arr[i];
  }
}

int main() {
  vector<int> nums = {3, 0, 0, 4, 0};
  // int arr[5] = {0, 1, 2, 0, 4};
  // moveZeros2(arr, 5);
  moveZeroes3(nums);
  // int nonZero = 0;
  return 0;
}