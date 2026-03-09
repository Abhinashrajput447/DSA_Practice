#include<iostream>
#include<string>
#include <cstring>
#include<algorithm>
using namespace  std;

void toupper(char word[], int n) {

  for(int i=0; i<n; i++) {
    char ch = word[i];
    if(ch >= 'A' && ch<= 'Z') {
      continue;
    }else{
      word[i] = ch - 'a'+'A';
    }
    
  }
  cout << word;
}

void toLoawer(char word[], int n) {
  for(int i=0; i<n; i++) {
    char ch = word[i];
    if(ch >= 'a' && ch <= 'z') {
      continue;
    }else{
      word[i] = ch-'A'+'a';
    }
  }
  cout << word;
}

void reverseCharArray(char word[], int n) {
  int st = 0, end = n-1;
  while(st < end) {
    swap(word[st++], word[end--]);
    // char temp = word[st];
    // word[st] = word[end];
    // word[end] = temp;
    // st++;end--;
  }
  // for(int i=0; i<n; i++) {
  //   word[i] = toupper(word[i]);
  // }
  cout << word;

  // for(int i=n-1; i>=0; i--){
  //   // word[i] = toupper(word[i]);
  //   // cout << word
  //   // cout << word[i];
  // }
  // cout << word;
}

bool validPalindrome(char word[], int n) {
  int st = 0, end = n-1;
  while(st < end) {
    if(word[st++] != word[end--]) {
      return false;
    }
  }
  return true;
  // char word1[100];
  // strcpy(word1, word);
  // reverse(word1, word1+n);
  // if(strcmp(word1, word) == 0) {
  //   return true;
  // }else {
  //   return false;
  // }
  // return strcmp(word1, word) == 0;
}

bool anagram(string s, string t) {
  if(s.length() != t.length()) return false;

  // sort(s.begin(), s.end());
  // sort(t.begin(), t.end());

  int count[26] = {0};
  for(int i=0; i<s.length(); i++) {
    int idx = s[i] - 'a';
    count[idx]++;
  }
  
  for(int i=0; i<t.length(); i++) {
    int idx = s[idx] - 'a';
    if(count[idx] == 0) {
      return false;
    }
    count[idx]++;
  }
  return true;
}

void compare(string s1, string s2) {
  
}

int main() {
  // char word[] = "racecar";
  // int n = strlen(word);
  // cout << validPalindrome(word, n);

  string s = "anagram";
  string t = "dog";

  cout << anagram(s, t);
  // cout << s.substr(1, 5);
  // cout << s.find("n");
}
