#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& arr, int tar, int st, int end) {
    if(st <= end) {
        int mid = st + (end-st)/2;
        if(arr[mid] == tar) {
            return mid;
        }else if(arr[mid] >= tar) {
            return binSearch(arr, tar, st, mid-1);
        }else{
            return binSearch(arr, tar, mid+1, end);
        }
    }
    return -1;
}

int search(vector<int>& arr, int tar) {
    return binSearch(arr, tar, 0, arr.size()-1);
}


int main() {
    vector<int> arr = {1,2,3,4,5};
    int tar = 6;

    cout << search(arr, tar) << endl;
    return 0;
}