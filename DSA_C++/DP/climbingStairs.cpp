#include <iostream>
#include <vector>
using namespace std;

// Recursion
int countWays(int n) {
    if(n == 0 || n == 1) return 1;

    return countWays(n-1) + countWays(n-2);
}

// Memorization => Top Down(Dp)
int countWaysDP(int n, vector<int>& dp) {
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;

    if(dp[n] != -1) return dp[n];

    dp[n] = countWaysDP(n-1, dp) + countWaysDP(n-2, dp) + countWaysDP(n-3, dp);

    return dp[n];
}

// Tabulation
int countWaysTab(int n) {
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for(int i=3; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[n-3];
    }

    return dp[n];
}

int main() {
    int n = 4;
    vector<int> dp(n+1, -1);
    cout << countWaysTab(n) << endl;
    return 0;
}