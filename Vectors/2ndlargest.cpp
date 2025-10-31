#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,5,4,3,16,17};
    int n = 7;
    int max1 = INT32_MIN;
    int max2 = INT32_MIN;
    //searching 
    for(int i=0;i<n;i++) {
        if(max1<arr[i]) {
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i] < max1 && max2!=arr[i]) {
            max2 = arr[i];
        }
    }
    cout << max2 << endl;
    return 0;
}