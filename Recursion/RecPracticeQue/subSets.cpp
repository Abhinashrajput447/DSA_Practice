#include <iostream>
#include <vector>
using namespace std;

void getAllSubSets(string s, string ans) {
  int n = s.length();
  if(n == 0) {
    cout << ans << "\n";
    return;
  }
  char ch = s[0];
  // choice yes 
  getAllSubSets(s.substr(1, n), ans+ch);
  // choice no
  getAllSubSets(s.substr(1, n), ans);
}


int main() {
  string s = "abc";
  string ans = "";

  getAllSubSets(s, ans);
  return 0;
}