#include <iostream>
#include <vector>
using namespace std;

// Using Recursion
long long fib(int n) {
    if(n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
}

// Tabulation (loop + table)
// Bottom up
long long fib2(int n){
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;

    for(int i=2; i<=n; i++) {
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}

// Memorization (recursion + storage)
// Top -> Down
int fibDP(int n, vector<int>& dp) {
    if(n == 0 || n == 1) return n;

    if(dp[n] != -1) return dp[n];

    dp[n] = fibDP(n-1, dp)+fibDP(n-2, dp);
    return dp[n];
}

int main() {
    clock_t start = clock();
    int n = 0;
    vector<int> dp(n+1, -1);

    cout <<"Fib of "<< n << "th no : " << fib2(n) << endl;

    clock_t end = clock();

    double time_taken = double(end-start)/CLOCKS_PER_SEC;

    cout << "Time taken: " << time_taken << " second" << endl;
    return 0;
}