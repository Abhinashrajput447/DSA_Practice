#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> pairSum(vector<int>& vec, int target) {
  int n = vec.size();
  vector<int> ans;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(vec[i] + vec[j] == target) {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
      }
    }
  }

  return ans;
}

vector<int> pairSum2(vector<int>& vec, int target) {
  int n = vec.size();
  int i = 0, j= n-1;
  vector<int> ans;

  while(i < j) {
    int currSum = vec[i]+vec[j];
    if(currSum == target) {
      ans.push_back({i});
      ans.push_back({j});
      return ans;
    }else if(currSum > target) {
      j--;
    }else{
      i++;
    }
  }
  return ans;
}

void twoDvec(vector<vector<int>>& matrix) {
  // int m = matrix.size(), n = matrix[0].size();

  for(int i=0; i<matrix.size(); i++) {
    for(int j=0; j<matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}


vector<int> findDuplicates(vector<int>& nums) {
  int n = nums.size();
  vector<int> ans;
  sort(nums.begin(), nums.end());

  for(int i=1; i<n; i++) {
    if(nums[i-1] == nums[i]) {
      ans.push_back(nums[i]);
      
    }
  }
  return ans;
}

int main() {
  vector<int> vec = {1, -1, 1, 2, 3, 5, 1, 2};
  vector<int> ans = findDuplicates(vec);

  for(int x : ans) {
    cout << x << " ";
  }

  // vector<vector<int>> matrix = {{1, 2, 3}, {4, 5}, {7, 8, 9}};
  // twoDvec(matrix);
  // vector<int> v;
  // for(int i=0; i<5; i++) {
  //   v.push_back(i);
    
  // }
  // cout << v.size() << endl;
  // cout << v.capacity() << endl;

  return 0;
}
