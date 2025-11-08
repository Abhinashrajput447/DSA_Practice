#include<iostream>
#include<vector>
using namespace std;

void printfSubset(vector<int>& arr,vector<int>& ans, int i) {
    if(i == arr.size()) {
        for(int val : ans) {
            cout << val << " ";
        }
        cout << endl;
        return;
    }
    //include
    ans.push_back(arr[i]);
    printfSubset(arr, ans, i+1);

    //exclude
    ans.pop_back();  // backtracking 
    printfSubset(arr, ans, i+1);
}
int main() {
    vector<int> arr = {1,2,3};
    vector<int> ans; // Store subset

    printfSubset(arr, ans, 0);
    return 0;
}