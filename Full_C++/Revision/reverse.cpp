#include <iostream>
#include <algorithm>  
using namespace std;

void reverse(int arr[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        swap(arr[st], arr[end]);
        st++;end--;
    }
}
int main() {
    int arr[] = {2,3,1,5,6,6,8};
    int n = 7;

    // int st = 0, end = n-1;
    // while(st < end) {
    //     swap(arr[st], arr[end]);
    //     st++;end--;
    // }
    reverse(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}