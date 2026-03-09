#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>
#include <unordered_set>
#include <algorithm>
using namespace std;

/*Brute Force Solution => apply set for */

int FruitIntoBaskets2(vector<int>& fruits) {
  int ans = 0, n = fruits.size();

  for(int i=0; i<n; i++) {
    unordered_set<int> st;
    for(int j=i; j<n; j++) {
      st.insert(fruits[j]);

      if(st.size() > 2) {
        break;
      }
      ans = max(ans, j-i+1);
    }
  }
  return ans;
}


/*Optimal Solution => Apply Two Pointer, Map, Sliding Window
Take two Pointer left and right map[fruits[right]]++ check
if map.size()>2 in While loop because we want to check whole 
Array not for a specific element or array 
Time Complexity => O(n), Space Complexity => O(n)*/

int FruitIntoBaskets(vector<int>& fruits) {
  unordered_map<int, int> baskets; // storing the fruits type <= 2
  int n = fruits.size();
  int left = 0, ans = 0;

  for(int right=0; right<n; right++) {
    baskets[fruits[right]]++; //Storing Right Fruits in the Basket

    while(baskets.size() > 2) {
      baskets[fruits[left]]--; /*checking in our Baskets not more than than
      two type of fruits*/

      if(baskets[fruits[left]] == 0) {
        baskets.erase(fruits[left]);
      }
      left++;
    }
    ans = max(ans, right-left+1);
  }
  return ans;
}

int main() {
  vector<int> nums = {1, 2, 1, 5, 5, 2, 1};
  cout << FruitIntoBaskets2(nums);
  return 0;
}