#include<iostream>
using namespace std;
int BinSearch(int arr[],int n,int target) {
    int st = 0,end = n-1;
    while(st<=end) {
        int mid = st + (end-st)/2;
        if(target > arr[mid]) {
            st = mid+1;
        }else if(target< arr[mid]) {
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}
int main() {
    int arr[] = {-1,0,2,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 6;

    cout << BinSearch(arr,n,tar) << endl;
    return 0;
}