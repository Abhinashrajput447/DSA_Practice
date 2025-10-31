#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1,4,5,3,2,6,7};
    int n = 7;
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i=0;i<n;i++) {
        bool flag = true; // array already sorted
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]<arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}