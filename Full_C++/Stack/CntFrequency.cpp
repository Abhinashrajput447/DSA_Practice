#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
  vector<int> arr = {1,1,2,1,2,3,1,4};
  int n = arr.size();
  unordered_map<int, int> freq;

  for(int nums : arr) {
    freq[nums]++;
  }

  cout << "Element frequency :\n";

  for(auto p : freq) {
    cout << p.first << " -> " << p.second << endl;
  }

  return 0;
}