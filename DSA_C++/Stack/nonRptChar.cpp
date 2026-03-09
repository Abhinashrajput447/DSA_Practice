#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  string s = "swiss";
  unordered_map<char, int> freq;

  for(char c : s) {
    freq[c]++;
  }

  for(char c : s) {
    if(freq[c] == 1) {
      cout << "first non reperting char: " << c << endl;
      // return 0;
    }
  }

  cout << "no non reperting char found.\n";
  return 0;
}