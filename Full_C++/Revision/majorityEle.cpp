#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityEle(vector<int>& nums) {
    int n = nums.size();

//     for(int i=0; i<n; i++) {
//         int freq = 0;
//         for(int j=0; j<n; j++) {
//             if(nums[j] == nums[i]) {
//                 freq ++;
//             }
//         }
//         if(freq > n/2) {
//             return nums[i];
//         }
//     }
// }   

    // for(int val : nums) {
    //     int freq = 0;
    //     for(int el : nums) {
    //         if(val == el) {
    //             freq++;
    //         }
    //     }
    //     if(freq > n/2) {
    //         return val;
    //     }
    // }
    // return -1;

    // sort(nums.begin(), nums.end());
    // int freq = 1, ans = nums[0];

    // for(int i=1; i<n; i++) {
    //     if(nums[i] == nums[i-1]) {
    //         freq++;
    //     }else {
    //         freq = 1;
    //         ans = nums[i];
    //     }
    //     return freq;
    //     // if(freq > n/2) {
    //     //     return ans;
    //     // }
    // }

    int freq = 0, ans = 0;

    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }else if(ans == nums[i]) {
            freq++;
        }else{
            freq--;
        }
    }

    int count = 0;

    for(int val : nums) {
        if(val == ans) {
            count ++;
        }
    }
    if(count > n/2) return ans;
    else return -1;
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2};
    cout << majorityEle(nums);
    return 0;
}

