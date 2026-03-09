#include<iostream>
#include<vector>
using namespace std;

//optimize approach
// vector<int> pairSum(vector<int>& vec, int tar, int n) {
//     vector<int>  ans;
//     int st = 0, end = n-1;

//     while(st < end) {
//         int sum = vec[st] + vec[end];

//         if(sum > tar) {
//             end--;
//         }else if(sum < tar) {
//             st++;
//         }else {
//             ans.push_back(st);
//             ans.push_back(end);
//             return ans;
//         }
//     }
//     return ans;
// }

//bruteForce approach

vector<int> pairSum(vector<int>& vec, int tar, int n) {
    vector<int> ans;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(vec[i]+vec[j] == tar) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {2,7,9,11};
    int tar = 16;
    int n = vec.size();
    
    vector<int> ans = pairSum(vec, tar, n);
    cout << ans[0] << ", " << ans[1] <<endl;

    return 0;
}

