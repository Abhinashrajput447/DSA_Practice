#include<iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -1;
                break;
            }
        }
    }
}
int main() {
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[5] = {1,2,7,8,4};
    int n = 6, m = 5;

    intersection(arr1, n, arr2, m);
    return 0;
}