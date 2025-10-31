#include<iostream>
using namespace std;

int proArr(int arr[],int n) {
    int pd = 1;
    for(int i=0;i<n;i++) {
        pd*=arr[i];
    }
    return pd;
}
int main() {
    int n;
    cout << "Enter size of an array : \n";
    cin >> n;

    int arr[n];
    cout << "Enter array elements : \n";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    //function call
    proArr(arr,n);
    
    //output 
    cout << proArr(arr,n) << endl;
    return 0;
}