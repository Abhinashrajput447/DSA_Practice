#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = INT_MIN;

    for(int i=0;i<n;i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}