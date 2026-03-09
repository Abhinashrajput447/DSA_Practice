#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[7] = {4,8,2,6,-1,7,-13};
    int n = 7;
    int min = INT32_MAX;

    for(int i=0;i<n;i++) {
        if(min>arr[i]) {
            min=arr[i];
        }
    }
    cout << min << endl;
    return 0;
}