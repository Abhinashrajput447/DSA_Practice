#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

/* Brute Force solution 
TC => O(N^3), SC => O(N)*/

bool isValid(string s) {
    stack<char> st;

    for(char c : s) {
        if(c == '(') {
            st.push(c);
        }else {
            if(st.empty()) {
                return false;
            }

            char top = st.top();
            if(top=='(' && c==')') {
                st.pop();
            }else{
                return false;
            }
        }
    }
    return st.empty();
}


int maxLenOfValidParen(string s) {
    int n = s.length();
    int maxLen = 0;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(isValid(s.substr(i, j-i+1))) {
                cout << maxLen << endl;
                maxLen = max(maxLen, j-i+1);
            }
        }
    }

    return maxLen;
}

/* Better Approach 
IN this also Stack
TC => O(N), SC => O(N)*/

int maxLenOfValidParen2(string s) {
    int n = s.length();
    int maxLen = 0;
    stack<int> st;

    st.push(-1);
    for(int i=0; i<n; i++) {
        if(s[i] == '(') {
            st.push(i);
        }else{
            st.pop();

            if(st.empty()) {
                st.push(i);
            }else{
                maxLen = max(maxLen, i-st.top());
            }
        }
    }

    return maxLen;
}

// Optimal Solution TC => O(N), SC => O(1)
int maxLenOfValidParen3(string s) {
    int n = s.length();
    int open = 0, close = 0;
    int maxLen = 0;

    for(int i=0; i<n; i++) {
        char c = s[i];

        if(c == '(') {
            open++;
        }else{
            close++;
        }

        if(open == close) {
            maxLen = max(maxLen, open+close);
        }else if(close > open) {
            open = 0, close = 0;
        }
    }

    open = 0, close = 0;

    for(int i=n-1; i>=0; i--) {
        char c = s[i];

        if(c == '(') {
            open++;
        }else{
            close++;
        }

        if(open == close) {
            maxLen = max(maxLen, open+close);
        }else if(open > close) {
            open = 0, close = 0;
        }
    }

    return maxLen;
}
int main() {
    string s = "()()()";

    cout << maxLenOfValidParen3(s) << endl;
    return 0;
}