#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool isSwap = false;

    for(int i=0;i<n-1;i++) { 
        for(int j=0;j<n-1-i;j++) { 
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap) { //Array is already sorted
            return;
        }
    }
}

void printArray(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = 8;
    bubbleSort(arr,n);
    printArray(arr,n);

    // for(int i=0;i<n-1;i++) {
    //     for(int j=0;j<n-1-i;j++) {
    //         if(arr[j]>arr[j+1]) {
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    // for(int i=0;i<n-1;i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    return 0;
}