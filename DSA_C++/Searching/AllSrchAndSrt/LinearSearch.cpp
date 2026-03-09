#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n =7;
    int target = 5;
    for(int i=0;i<n;i++) {
        if(arr[i] == target) {
            cout << "index = " << i << endl;
            break;
        }
    }
    return 0;
}