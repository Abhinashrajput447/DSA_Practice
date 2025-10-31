#include<iostream>
#include<climits>
using namespace std;

int kandas(int arr[],int n,int tar)  {
    int currSum = 0, maxSum = INT32_MIN;

    for(int i=0;i<n;i++) {
        currSum += arr[i];
        maxSum = max(currSum, currSum);
        if(currSum<0) {
            currSum = 0;
        }
    }
    return maxSum;
}
int main() {
    int arr[] = {-1,2,-3,4,-5,6,7,-8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar;
    cin >> tar;

    cout << kandas(arr,n,tar);
    return 0;
}