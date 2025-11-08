#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> arr, int n) {
    if(n==0 || n==1) return true;

    // if(arr[n-1] >= arr[n-2] && isSorted(arr, n-1)) {
    //     return true;
    // }
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1); 
}
int main() {
    vector<int> arr = {0};
    cout << isSorted(arr, 0) ; 
    return 0;
}