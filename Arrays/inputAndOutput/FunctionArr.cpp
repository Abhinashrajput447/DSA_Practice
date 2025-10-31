#include<iostream>
#include<climits>
using namespace std;

void fun(int x[]) {
    x[3] = 7;
    return;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //Before function calling 
    cout << arr[3] << endl;

    //After function call 
    fun(arr);
    cout << arr[3] << endl;
    return 0;
}