#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' ||c == 'e' ||
            c == 'i' || c == 'o' ||
            c == 'u' || c == 'A' ||
            c == 'E' || c == 'I' || 
            c == 'O' || c == 'U');
}

string reverseVowels(string s) {
    int n = s.size();
    int st = 0, end = n-1;

    while(st < end) {
        if(isVowel(s[st]) && isVowel(s[end])) {
            swap(s[st], s[end]);
            st++;
            end--;
            
        }else if(isVowel(s[st])) {
            end--;
        }else {
            st++;
        }
    }
    return s;
}

int main() {
    string s = "Abhinash";
    cout << "Original : " << s << endl;
    cout << "Reverse Vowel: " << reverseVowels(s) << endl;
    return 0;
}