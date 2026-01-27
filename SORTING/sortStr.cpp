#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void sortByLength(vector<string>& arr) {
  sort(arr.begin(), arr.end(), [](const string& s1, const string& s2) {
    return s1.length() < s2.length();
  });

}

class StringCompare {
public:
  bool operator()(const string& s1, const string& s2) {
    return s1.length() < s2.length();
  }
};

int main() {
  vector<string> arr = {"apple", "cat", "banana", "dog"};
  // sortByLength(arr);

  sort(arr.begin(), arr.end(), StringCompare());
  for(auto &s : arr) {
    cout << s << " ";
  }
  return 0;
}