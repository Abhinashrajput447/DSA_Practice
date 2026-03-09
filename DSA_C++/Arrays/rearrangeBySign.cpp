#include <iostream>
#include <vector>
using namespace std;

vector<int> reArrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    int even = 0, odd = 1;
    for(int i=0; i<n; i++) {
        if(nums[i] > 0) {
            ans[even] = nums[i];
            even += 2;
        }else{
            ans[odd] = nums[i];
            odd += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {-1, 1, 4, -1, 3, -5, -6, 7};

    vector<int> ans = reArrangeArray(nums);

    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}