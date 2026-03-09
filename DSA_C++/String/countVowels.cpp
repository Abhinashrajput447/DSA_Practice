#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' ||c == 'e' ||
        c == 'i' || c == 'o' ||
        c == 'u' || c == 'A' ||
        c == 'E' || c == 'I' || 
        c == 'O' || c == 'U');
}

int cntVowels(string s) {
    int cnt = 0;
    for(int i=0; i<s.size(); i++) {
        if(isVowel(s[i])) {
            cnt++;
        }
    }
    return cnt;
}
int main() {
    string s = "AbhinasVarsha";
    cout << "No of Vowel in S: " << cntVowels(s) << endl;
    cout << "No of Consonants in S:" << s.length()-cntVowels(s) << endl;
    return 0;
}