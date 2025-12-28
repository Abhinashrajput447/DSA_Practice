#include <iostream>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
  if(s.size() != t.size()) return false;

  unordered_map<char, int> freq;

  for(char c : s) {
    freq[c]++;
  }
  for(char c : t) {
    freq[c]--;
  }

  for(auto p : freq) {
    if(p.second != 0) return false;
  }
  return true;
}

int main() {
  string s = "listenl", t = "sillent";

  if(isAnagram(s, t)) {
    cout << "Anagram\n";
  }else{
    cout << "Not Anagram\n";
  }
  return 0;
}