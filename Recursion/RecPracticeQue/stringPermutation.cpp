#include<iostream>
#include<string>
using namespace std;

void permute(string &str, int idx, int r) {
    if(idx == r) {
        cout << str << endl;
    }else {
        for(int i=idx; i<str.length(); i++) {
            swap(str[idx], str[i]);

            permute(str, idx+1, r);

            swap(str[idx], str[i]);
        }
    }
}

int main() {
    string s = "ABC";
    permute(s, 0, s.length());
    return 0;
}