#include<iostream>
using namespace std;

int main() {
    int val , arr[100], pos , n;
    cout << "enter size of arr, val, pos" << endl;
    cin >> n >> val >> pos ;
    for(int i=0; i<n; i++) {
        cin >> arr[i] ;
    }

    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = val;

    for(int i=0; i<=n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}