#include <iostream>
#include <vector>
#include <limits>
#include <string>
#include <unordered_map>
using namespace std;

//Need to count max number of digit equal to k 
// in this problem we will use MAP and Sliding Window Approach 
//Time Complexity => O(n) , Space Complexity => O(n)
int longArrAtMostKDisNum(vector<int>& nums, int k) {
  int n = nums.size();
  unordered_map<int, int> hash; // coung the elemens and frequency 
  int left = 0, ans = 0;

  for(int right=0; right<n; right++) {
    hash[nums[right]]++; //pushing the elements in the map for checking the emlems 

    while(hash.size() > k) {
      hash[nums[left]]--; // is hashmap size > k then we are reducing the map Size

      if(hash[nums[left]] == 0) {
        hash.erase(nums[left]); // deleating the left element for shrinking to the next elements
      }
      left++;
    }
    ans = max(ans, right-left+1); // counting max number of length equal to k 
  }
  return ans;
}

/*LeetCode 340 
This problem is based on leetcode 904 
In that both problem we need to use unordered_map, two pointer and Sliding window Approach
Time Complexity => O(n) , Space Complexity => O(n)*/

int longStrAtMostKDistChar(string str, int k) {
  int n = str.size();
  unordered_map<char, int> hash;  // char => Freq
  int left = 0, ans = 0;  //left and right pointer 
  for(int right=0; right<n; right++) {
    hash[str[right]]++; // Storing the right char in hash_map

    while(hash.size() > k) {  // we don't want more than k element 
      hash[str[left]]--; // if upper condition is true then need to slide window 

      if(hash[str[left]] == 0) {
        hash.erase(str[left]);  // need to erase the left char for sliding the window 
      } 
      left++;
    }
    ans = max(ans, right-left+1); // storing the max length of k most distinct char in ans variable
  }
  return ans;
} 


/* 424. Longest Repeating Character Replacement 
Given a string and we need to check whih cher is repeating more after replacing K char beteen 
them ex => s = "ABBA", k = 2 => if we replace "BA then ans will 4 => "AAAA" or same for "BBBB"
Time complecity => O(n), Space Comlexity => O(1){only 26 letter storing}*/

int characterReplacement(string s, int k) {
  vector<int> freq(26, 0);
  int maxFreq = 0, left = 0, maxLen = 0;

  for(int right=0; right<s.size(); right++) {
    freq[s[right]-'a']++;

    maxFreq = max(maxFreq, freq[s[right]-'a']);

    while ((right - left + 1) - maxFreq > k) {
      freq[s[left] - 'a']--;
      left++;
    }
    maxLen = max(maxLen, right-left+1);
  }
  return maxLen;
}
int main() {
  // vector<int> nums = {1, 2, 3, 1, 2, 3, 2, 2, 8, 9, 5};
  // cout << longArrAtMostKDisNum(nums, 4);
  string str = "bbbinasha";
  cout << characterReplacement(str, 2);
  // cout << longStrAtMostKDistChar(str, 2);
  return 0;
}