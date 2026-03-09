#include<iostream>
#include<cctype>
using namespace std;

int main() {
  // 1st type

  // string s = "madam";   // this code is only for lower case and without space
  // int n = s.size();
  // string p;

  // for(int i=n-1; i>=0; i--) {
  //   p.push_back(tolower(s[i]));
  // }

  // if(p == s) cout << "palindrome\n";
  // else cout << "not palindrome\n";

  //2nd type

  string s;
  getline(cin, s);

  string clean;
  for(char c : s) {
    if(isalpha(c));
    clean.push_back(tolower(c));
  }

  string p;
  for(int i=clean.size()-1; i>=0; i--) {
    p.push_back(clean[i]);
  }

  if(p == clean) cout << "palindrome\n";
  else cout << "non palindrome\n";

  return 0;
}