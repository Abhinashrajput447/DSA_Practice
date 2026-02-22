#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*Given two string S & T rearrange in this what the max XOR Will should come*/

string maxBitwiseXor(string s, string t) {
  //Count bits of T(string)
  int cnt0 = 0, cnt1 = 0;
  for(char c : t) {
    if(c == '0') cnt0++;
    else cnt1++;
  }

  //Result container 
  string res = "";
  //We must not change the S(string)
  for(int i=0; i<s.size(); i++) {
    if(s[i] == '0') {
      if(cnt1 > 0) {
        res += '1';
        cnt1--;
      }else{
        res += '0';
        cnt0--;
      }
    }else{
      if(cnt0 > 0) {
        res += '1';
        cnt0--;
      }else{
        res += '0';
        cnt1--;
      }
    }
  }
  return res;
}



int main() {
  string s = "101";
  string t = "100";

  cout << maxBitwiseXor(s, t);
  return 0;
}