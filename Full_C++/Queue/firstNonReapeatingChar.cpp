#include <iostream>
#include <string>
#include <queue>
using namespace std;

char firstNonRepeat(string str) {
  int n = str.size();
  queue<char> Q;
  // int freq[26] = {0};
  vector<int> freq(26, 0);

  for(int i=0; i<n; i++) {
    char ch = str[i];
    Q.push(ch);

    freq[ch-'a']++;

    while(!Q.empty() && freq[Q.front()-'a'] > 1) {
      Q.pop();
    }

  }

  // if(!Q.empty()) {
  //   return Q.front();
  // }
  // return '#';

  return Q.empty() ? '#' : Q.front(); 
}



int main() {
  string str = "aabccxxb";
  // firstNonRepeat(str);
  cout << firstNonRepeat(str);
  return 0;
}