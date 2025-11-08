#include<iostream>
#include<vector>
using namespace std;

int BinSearch(vector<int> arr, int tar) {
    int st = 0 , end = arr.size() - 1;

    while(st <= end) {
        int mid = st + (end-st)/2;

        if(tar > arr[mid]) {
            st = mid + 1; // 2nd half
        }else if(tar < arr[mid]) {
            end = mid - 1; //1st half
        }else{
            return mid;
        }
    }
    return -1;
}

int recBinSearch(vector<int> arr, int tar, int st , int end){
    if(st <= end) {
        int mid = st + (end - st) / 2;

        if(tar > arr[mid]) { // search in 2nd half
            return recBinSearch(arr,tar,mid+1,end);
        }else if(tar < arr[mid]) { // search in 1st half
            return recBinSearch(arr,tar,st,mid-1);
        }else {
            return mid;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {-1,0, 3, 5, 9, 12}; // odd;
    int tar1 = 12;

    //cout << BinSearch(arr1, tar1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
    int tar2 = 5;

    cout << BinSearch(arr2, tar2) << endl;
    return 0;
}