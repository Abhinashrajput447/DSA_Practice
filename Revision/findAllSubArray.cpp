#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    int maxSum = INT32_MIN;
    for(int st=0; st<n; st++) {
        int currSum = 0;
        for(int end=0; end<n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            // for(int i=st; i<=end; i++) {
            //     cout << arr[i] ;
            // }
            // cout <<" ";
        }
    }
    cout << maxSum;
    return 0;
}

