#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[6] = {5,4,17,2,1,18};
    int n = 6;
    int max = INT32_MIN;
    for(int i=0;i<n;i++) {
        if(max<arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}