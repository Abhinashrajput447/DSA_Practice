#include<iostream>
using namespace std;
void maxAndMin(int arr[], int n) {
    int minIdx = 0;
    int maxIdx = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] < arr[minIdx]) minIdx = i;
        if(arr[i] > arr[maxIdx]) maxIdx = i;
    }
    swap(arr[minIdx], arr[maxIdx]);

    cout << "After swappping min and max value" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {17,21,3,14,5};
    int n = 5;

    maxAndMin(arr, n);
    return 0;
}