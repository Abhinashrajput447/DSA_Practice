#include<iostream>
#include<string>
#include <cstring>
using namespace  std;

void toUpper(char word[], int n) {

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

int main() {
  char word[] = "ApLle";
  int n = strlen(word);
  toUpper(word, n);
  // cout << word;
}
