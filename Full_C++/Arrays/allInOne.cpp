#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

//Checking a string is palindrome or not with all lowerCase 
// Time Complesity => O(n)
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

// Creating a swap Function
// Time Complesity => O(n)
void swap2(char &a, char &b) {
  char t = a;
  a = b;
  b = t;
}

//Reversing a string
// Time Complesity => O(n)
void reverseString(string& s) {
  int i=0, j=s.size()-1;

  while(i < j) {
    swap2(s[i], s[j]);
    i++;j--;
  }
}

// Reversing a char => Like String type
// Time Complesity => O(n)
void reverseChar(vector<char>& s) { 
  int i=0, j=s.size()-1;

  while(i < j) {
    swap(s[i++], s[j--]);
  }
}

//Move All Zeros End of the array
// Time Complesity => O(n) 
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

//Print the array 
// Time Complesity => O(n)
void print(vector<int> nums) {
  for(int i=0; i<nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << "\n";
}

//Removing Duplicate Element from the array
// Time Complesity => O(n)
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

//Removing all the Duplicate Element from the array using "set"
// Time Complesity => O(n) , Space Complexity => O(n)
vector<int> removeDuplicate2(vector<int>& nums) {
  unordered_set<int> seen;
  vector<int> ans;

  for(int i=0; i<nums.size(); i++) {
    if(seen.find(nums[i]) == seen.end()) {
      seen.insert(nums[i]);

      ans.push_back(nums[i]);
    }
  }
  return ans;
}

//Rotating the nonNeg number by K pos from "Left"
// Time Complesity => O(n) and Space Complexity => O(n)
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

//Three sum brute force code 
// Time Complesity => O(n^3*NlongN) => O(n^3) and Space Complexity => O(n)
vector<vector<int>> threeSum(vector<int>& nums) {
  int n = nums.size();
  vector<vector<int>> ans;  

  set<vector<int>> s; // We want only unique elements
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      for(int k=j+1; k<n; k++) {
        if(nums[i]+nums[j]+nums[k] == 0) {
          vector<int> trip = {nums[i], nums[j], nums[k]};
          sort(trip.begin(), trip.end()); // For unique element


          if(s.find(trip) == s.end()) { // Checking the elements are not reapeating na 
            s.insert(trip);             // if Not reapeating => insert the trip elements into the set 
            ans.push_back(trip);        // and after this push the elements into the ans vactor 
          }
        }
      }
    }
  }
  return ans;
}

//Three sum Better Approach code 
// Time Complesity => O(n^2*NlongN) => O(n^2) and Space Complexity => O(n)

vector<vector<int>> threeSum2(vector<int>& nums) {
  int n = nums.size();
  set<vector<int>> uniqueTrip;

  for(int i=0; i<n; i++) {
    int tar = -nums[i];
    set<int> s;

    for(int j=i+1; j<n; j++) {
      int third = tar - nums[j];

      if(s.find(third) != s.end()) {
        vector<int> trip = {nums[i], nums[j], third};
        sort(trip.begin(), trip.end());

        uniqueTrip.insert(trip);
      }

      s.insert(nums[j]);
    }
  }

  vector<vector<int>> ans(uniqueTrip.begin(), uniqueTrip.end());
  return ans;
}


int dist(vector<int>& nums) {
  int n = nums.size();
  vector<int> ans;
  int v = 0;
  for(int i=0; i<n; i++) {
    int sum = 0;
    for(int j=0; j<n; j++) {
      if(nums[i] == nums[j]) {
        sum += abs(i-j);
      }else{
        break;
      }
    }
    int v = sum;
  }
  return v;
}

int addDig(int n) {
  int sum = 1+(n-1)%9;
  return sum;
}

int addOne(vector<int>& nums) {
  int n = nums.size();

  for(int i=n-1; i>=0; i--) {
    
  }
}

int main() {
  vector<int> nums = {1,5,2,3,6,7,8};
  // vector<vector<int>> ans = threeSum2(nums);

  // cout << "[";
  // for(auto &trip : ans) {
  //   cout << "[";
  //   for(int x : trip) {
  //     cout << x << " ";
  //   }
  //   cout << "]";
  // }
  // cout << "]\n";

  cout << dist(nums);
  
  return 0;
}