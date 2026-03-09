#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int strockBuy(vector<int>& nums) {
    int n = nums.size();
    int maxProfit = 0, bestBuy = nums[0];

    for(int i=1; i<n; i++) {
        if(nums[i] > bestBuy) {
            maxProfit = max(maxProfit, nums[i]-bestBuy);
        }
        bestBuy = min(bestBuy, nums[i]);
    }
    return maxProfit;
}

int main() {
    vector<int> nums = {7,1,5,3,6,4};

    cout << strockBuy(nums);
    
    return 0;
}

