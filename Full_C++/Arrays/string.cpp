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



int main() {
  char word[] = "racecar";
  int n = strlen(word);
  cout << validPalindrome(word, n);
  // cout << word;
}
