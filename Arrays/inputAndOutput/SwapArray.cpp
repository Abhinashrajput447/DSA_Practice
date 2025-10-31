#include<iostream>
using namespace std;

void swap(int arr[]) {
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}
int main() {
    int arr[2] = {5,7};
    //before swapping 
    cout << arr[0] << " " << arr[1] << endl;
    
    //After swapping 
    swap(arr);
    cout << arr[0] << " " << arr[1] << endl;

    return 0;
}