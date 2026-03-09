#include<iostream>
using namespace std;

// Function to reverse an array
void reverse(int arr[], int n) {
    int st = 0, end = n-1;
    while(st < end) {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    // Call reverse function
    reverse(arr, n);
    // Print reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
