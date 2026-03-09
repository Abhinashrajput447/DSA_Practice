#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

/*A prefix of a string is any substring that starts from index 0.
It must begin from the first character.*/
int longestCommonPrefixLength(vector<string>& strs) {
  if(strs.empty()) return 0;

  string prefix = strs[0];

  for(int i = 1; i < strs.size(); i++) {
    while(strs[i].find(prefix) != 0) {  
      prefix.pop_back();             
      if(prefix.empty()) return 0;
    }
  }

  return prefix.length();
}

//return the Longest Common Prefix String 
//Time Complexity => O(n*m)
string longestCommonPrefix(vector<string>& strs) {
  if(strs.empty()) return "";

  string pref = strs[0];
  int prefLen = pref.length();

  for(int i=1; i<strs.size(); i++) {
    string s = strs[i];

    while(prefLen > s.size() || pref != s.substr(0, prefLen)) {
      prefLen--;
      if(prefLen == 0) {
        return "";
      }
      pref = pref.substr(0, prefLen);
    }
  }
  return pref;
}

int main() {
  vector<string> str = {"aaabhinash", "aaaarsha", "aaaarohi"};
  cout << longestCommonPrefixLength(str);
  return 0;
}