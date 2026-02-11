#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits>
#include <algorithm>
using namespace std;

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
  cout << FruitIntoBaskets(nums);
  return 0;
}