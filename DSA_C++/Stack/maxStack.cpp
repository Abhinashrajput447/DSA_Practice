#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class MaxStack {
    stack<pair<int, int>> st; // val, maxVal

public:
    MaxStack() {} 

    void push(int val) {
        if(st.empty()) {
            st.push(make_pair(val, val));
        } else {
            // Correct syntax: use parentheses
            int maxVal = max(val, st.top().second);
            st.push(make_pair(val, maxVal));
        }
    }  

    void pop() {
        st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMax() {
        return st.top().second;
    }

    bool empty() {
        return st.size() == 0;
    }
};

int main() {
    MaxStack st;
    
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(0);
    st.push(6);
     
    cout << "Max Stack val : " << st.getMax() << endl;
    while(!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }
    
    cout << endl;

    return 0;
}