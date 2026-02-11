#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

/*Using brute force approach to countign the max freq of a numebr 
need to take two loops and compare with each other if match then count the 
frequency and ans = max(ans, freq) 
Time Complecity => O(n^2) && Space Complexity => O(1)*/
vector<int> maxFreq(vector<int>& nums) {
  int ans = 0, ele = 0;
  int n = nums.size();
  for(int i=0; i<n; i++) {
    int cnt = 0;
    for(int j=0; j<n; j++) {
      if(nums[i] == nums[j]) {
        cnt++;
      }
    }
    if(cnt > ans) { //Checking which elements appears more time
      ans = cnt;
      ele = nums[i];
    }
    // ans = max(ans, cnt);
  }
  // cout << ans;
  cout << "element = " << ele << " and " << "Freq = " << ans << endl; //printing which elements appears more time with freq
  return {ele, ans};
}

/*Using Optimal approach to countign the maximum frequency of a numebr 
need to unordered_map<index, freq> hash take a loop i and store all array 
elements in map and check hash[nums[i]] > maxFreq then do your work 
ans = max(ans, freq) 
Time Complecity => O(n) && Space Complexity => O(n)*/

vector<int> maxFreq2(vector<int>& nums) {
  unordered_map<int, int> hash;
  int maxFreq = 0, ele = nums[0];

  for(int i = 0; i < nums.size(); i++) {
    hash[nums[i]]++;

    if(hash[nums[i]] > maxFreq) { // cheching hash[freq[i]] > maxFreq then store in maxFreq and ele = nums[i] 
      maxFreq = hash[nums[i]];
      ele = nums[i];
    }
    maxFreq = max(maxFreq, hash[nums[i]]); // we can return also this type for only maximum freq
  }
  cout << "element = " << ele << " and " << "Freq = " << maxFreq << endl;
  return {ele, maxFreq};
}

/*Using brute force approach to countign the max freq of a numebr 
need to take two loops and compare with each other if match then count the 
frequency and ans = max(ans, freq) 
Time Complecity => O(n^2) && Space Complexity => O(1)*/
int maxFreqOfAChar(string s) {
  int n = s.size(), maxLen = 0;
  char ch = s[0];
  for(int i=0; i<n; i++) {
    int cnt = 0;
    for(int j=0; j<n; j++) {
      if(s[i] == s[j]) { //Comparing same char 
        cnt++;
      }
    }
    if(cnt > maxLen) {
      maxLen = cnt;
      ch = s[i];
    }
  }
  cout << "Char = " << ch << " & " << "Max Length " << maxLen << endl; //printing char and their freq
  return maxLen;
}

/*Optimal Appracoh with Time Complecity => O(n), Space Complexity => O(1){only 26 char}
Take a vector of 26 lenght with value 0 vector<int> freq(26, 0) => run a loop and store the value in
taken vector and count maximun and return them*/

int maxFreqOfAChar2(string s) {
  int n = s.size(), maxLen = 0;
  vector<int> freq(26, 0);
  char ch = s[0];

  for(int i=0; i<n; i++) {
    freq[s[i]-'a']++;  // need to substract -'a' for mantaing ascii value 

    if(freq[s[i]] > maxLen) {
      maxLen = freq[s[i]-'a']; // need to substract -'a' for mantaing ascii value 
      ch = s[i];
    }
  }
  cout << "Char = " << ch << " & " << "Max Length = " << maxLen << endl; //printing char and their freq
  return maxLen;
}


int main() {
  // vector<int> nums = {1, 2, 3, 1, 2, 2, 2, 2, 2,2 ,2, 2, 3, 1, 2, 1, 1, 1};
  // cout << maxFreq(nums);
  // maxFreq2(nums);

  string s = "abaababa";
  cout << maxFreqOfAChar2(s);
  return 0;
}