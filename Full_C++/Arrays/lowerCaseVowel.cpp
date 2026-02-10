#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Counting the Lovercase volwel charector in string
//Time complexity => O(n)
int cntLowerCaseVowel(string s) {
  int cnt = 0;
  for(int i=0; i<s.length(); i++) {
    if(s[i] == 'a' || s[i] == 'e'||s[i] == 'i' || s[i] == 'o'|| s[i] == 'u') {
      cnt++;
    }
  }
  return cnt;
}

// swapping one different element char from string
// Time complexity => O(n)
bool swapOne(string s1, string s2) {
  int n = s1.length();
  if(s1 == s2) return true;

  vector<int> diff;
  for(int i=0; i<n; i++) {
    if(s1[i] != s2[i]) {
      diff.push_back(i);
    }
  }

  if(diff.size() != 2) return false;
  return s1[diff[0]] ==  s2[diff[1]] && s1[diff[1]] ==  s2[diff[0]];
}

int main() {
  string s1 = "bank", s2 = "kanb";
  // getline(cin, s);
  cout << swapOne(s1, s2);
  return 0;
}