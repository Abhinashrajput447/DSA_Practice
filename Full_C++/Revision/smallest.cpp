#include<iostream>
using namespace std;


int main() {
    int arr[6] = {1,2,3,4,5,6};
    int smallest = INT32_MAX;
    for(int i=0; i<6; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << smallest;
    return 0;
}