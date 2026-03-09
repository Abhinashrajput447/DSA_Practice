#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>
#include <algorithm>
using namespace std;

//Brute Force => using two LOOP for subarrays 
//First Calculate Sum, then Calculate Max AVERAGE
//Time Complexity => O(n^2) , Space Complexity => O(1)

double maxSubArrAvg(vector<int>& nums, int k) {
  int n = nums.size();
  double avg = -1000000000.0;

  for(int i=0; i+k<=n; i++) {
    int sum = 0;
    for(int j=i; j<i+k; j++) {
      sum += nums[j];
    }
    avg = max(avg, (double)sum/k); //Storing maximum avgerage in avg variable
  }
  return avg;
}

/*Optimal Soution => Use sliding WINDOW Approach
First Calculate Window Sum => then after this Calculate
run a loop from k to n and calculate again window for another part of
Time Complexity => O(n+k) , Space Complexity => O(1) 
*/

double maxSubArrAvg2(vector<int>& nums, int k) {
  int n = nums.size();
  double avg = -10e9;
  int windowSum = 0;
  for(int i=0; i<k; i++) {
    windowSum += nums[i];
  }

  for(int i=k; i<n; i++) {
    windowSum += nums[i]-nums[i-k];
    avg = max(avg, (double)windowSum/k);
  }
  return avg;
}

int main() {
  vector<int> nums = {1, 2, -4, 6, 7};
  cout << maxSubArrAvg2(nums, 2);
  return 0;
}