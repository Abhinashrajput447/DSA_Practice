#include<iostream>
using namespace std;

int arrSum(int arr[],int n) {
    
    int Sum = 0;
    for(int i=0;i<n;i++) {
        Sum+=arr[i];
    }
    return Sum;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    //array size
    int n = sizeof(arr)/sizeof(arr[0]);
    // function call
    arrSum(arr,n);
    // output 
    cout <<"Array Sum = " << arrSum(arr,n) << endl;
    return 0;
}