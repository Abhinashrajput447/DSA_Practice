#include<iostream>
#include<string>
using namespace std;

int main() {
  string s;
  cout << "enter the string: ";
  cin >> s;
  cout << "you entered: " << s << endl;
  int n = s.size();

  int cnt = 0;
  for(int i=0; i<n; i++) {
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}