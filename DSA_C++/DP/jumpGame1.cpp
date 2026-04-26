#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void printGame(vector<int>& dp) {
    for(int i=0; i<dp.size(); i++) {
        cout << dp[i] << " ";
    }
    cout << endl;
}

// Brute Forece using DP TC => O(n^2), Sc => O(n)
bool maxJump(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n, false);
    dp[0] = true; // First index is reachable [t,f,f,f,f]
    cout << "DP[0]: ";
    printGame(dp);

    for(int i=0; i<n; i++) {
        int maxJump = min(i+nums[i], n-1);
        cout << "maxJump: " << maxJump << " ";
        if(dp[i]) {
            for(int j=i+1; j<=maxJump; j++) {
                cout << "j: " << j << " -> ";
                dp[j] = true;
                printGame(dp);
                if(j == n-1) return true; 
            }
        }
    }

    return dp[n-1];
}

// Using Greedy Approach TC => O(n) SC => O(1)
bool maxJump1(vector<int>& nums) {
    int n = nums.size();
    int goal = n-1; // last idx we want to rach from 1st idx

    for(int i=n-1; i>=0; i--) {
        cout << goal << ", ";
        if(i+nums[i] >= goal) 
            goal = i; // this idx can reach curr goal
        
    }

    return goal == 0; // start can reach end
}

int main() {
    vector<int> nums = {1, 1, 1, 4}; // true

    cout << maxJump1(nums) << endl;
    return 0;
}