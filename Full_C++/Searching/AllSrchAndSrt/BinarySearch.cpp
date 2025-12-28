#include<iostream>
#include<vector>
using namespace std;

int BinSearch(int arr[],int n, int tar) {
    int st = 0, end = n-1;

    while(st<=end) {
        int mid = st + (end - st) / 2;
        if(tar > arr[mid]) {
            st = mid + 1;
        }else if(tar < arr[mid]) {
            end = mid - 1;
        }else {
            return mid;
        }
    }
    return 0;
}

int recBinSearch(int arr[],int tar,int st, int end) {
    if(st<=end) {
        int mid = st + (end-st)/2;
        if(tar > arr[mid]) {
            return recBinSearch(arr,tar,mid+1,end);
        }else if(tar < arr[mid]) {
            return recBinSearch(arr,tar,st,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr1[] = {-1, 0, 3, 4, 5, 9, 12};
    int x = sizeof(arr1) / sizeof(arr1[0]);
    int tar1 = 5;

    cout << BinSearch(arr1,x,tar1) << endl;

    int arr2[] = {-1, 0, 3, 4, 5, 9, 12};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int tar2 = 5;
    cout << recBinSearch(arr2,n,0,n-1) << endl;
    return 0;
}