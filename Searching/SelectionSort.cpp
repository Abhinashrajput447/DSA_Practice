#include<iostream>
using namespace std;

void Selectionsort(int arr[], int n) {
    for(int i=0;i<n-1;i++) {
        int smallestIdx = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}

void printArray(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {4,3,1,2,5};
    int n = 5;


    Selectionsort(arr, n);
    printArray(arr, n);
    return 0;
}