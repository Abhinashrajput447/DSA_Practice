#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPosible(vector<int> &arr, int n, int m,  int maxAllowedTime) {

    int painter = 1, time = 0;

    for(int i=0;i<n;i++) {
        if(time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        }else {
            painter++;
            time = arr[i];
        }
    }

    return painter>m ? false : true;
}



int minTiimeToPaint(vector<int> &arr,int n, int m) { //O(logN*n)

    if(m>n) return -1;

    int sum = 0 , maxVal = INT_MIN;
    for(int i=0;i<n;i++) { //O(n)
        sum+=arr[i];
        maxVal = (maxVal, arr[i]);
    }
    int st = maxVal , end = sum , ans = -1; // check range 

    while(st<=end) { // O(logN)
        int mid = st + (end-st)/2;

        if(isPosible(arr, n, m, mid)) { // left 
            ans = mid;
            end = mid-1;
        }else{ // right 
            st = mid+1;
        }
    }
}
int main() {
    vector<int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;

    cout << minTiimeToPaint(arr,n,m) << endl;
    return 0;
}