#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

string smallestLeteer(string s) {
    // Increasing Monotonic Stack + Frequency Vec + Vis(Seen) Vec

    // Count the Freq
    vector<int> freq(26, 0);
    for(char c : s) freq[c]++;

    // Monotonic Stack
    stack<int> st;

    // Visited Vec
    vector<bool> seen(26, false);

    // Run a Loop through string on each char
    
    for(char c : s) {
        if(seen[c-'a']) {
            freq[c-'a']--;
            continue;
        }

        while(!st.empty() && st.top() > c && freq[c-'a']>0) {
            seen[c-'a'] = false;
            st.pop();
        } 

        st.push(c);
        seen[c-'a'] = true;
        freq[c-'a']--;
    }

    string res = "";
    while(!st.empty()) {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());
    
    return res;
}

int main() {
    string s = "caabd";
    cout << smallestLeteer(s) << endl;
    return  0;
}