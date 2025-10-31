#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++) {
        if(arr[i]%2!=0) arr[i] = arr[i]+10;
        else arr[i] = arr[i]*2;
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}