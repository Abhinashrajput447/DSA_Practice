#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array is \n";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

    cout << "\nreverse is \n";
    // int st = 0, end = n-1;
    for(int i=n-1;i>=0;i--) {
        cout << arr[i] << " ";
    }
    
    return 0;
}