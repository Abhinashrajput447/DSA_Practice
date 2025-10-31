#include <iostream>
#include <algorithm>  
using namespace std;
 
int sum(int arr[], int n) {
    int s = 0;
    for(int i=0; i<n; i++) {
        s += arr[i];
    }
    return s;
}
int product(int arr[], int n) {
    int prod = 1;
    for(int i=0; i<n; i++) {
        prod *= arr[i];
    }
    return prod;
}
int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = 6;

    cout << sum(arr, n) << endl;
    cout << product(arr, n) << endl;

    return 0;
}