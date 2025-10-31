#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
    //stock prices
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    int n = price.size();

    // solution
    vector<int> ans(price.size(), 0);
    stack<int> s;

    for(int i=0; i<n; i++) {
        while(s.size() > 0 && price[s.top()] <= price[i]) {
            s.pop();
        }

        if(s.size() == 0) {
            ans[i] = i+1;
        }else {
            ans[i] = i-s.top();  // i - prevHigh
        }
        s.push(i);
    }

    //print ans values 
    for(int val : ans) {
        cout << val <<  " ";
    }
    cout << endl;
    
    return 0;
}