#include<iostream>
using namespace std;

int main() {
    int arr[6] = {2,5,4,1,6,7};
    int n = 6;

    for(int i=0;i<n-1;i++) {
        int midIdx = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[midIdx]) {
                midIdx = j;
            }
        }
        swap(arr[i], arr[midIdx]);
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    return 0;
}