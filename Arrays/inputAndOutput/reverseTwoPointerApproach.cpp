#include<iostream>
using namespace std;

int reverse(int arr[],int n) {
    int st=0, end=n-1;
    while(st<end) {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
}
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n =7;

    // function call 
    reverse(arr,n);
    //reverse
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
