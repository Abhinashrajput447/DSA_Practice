#include<iostream>
using namespace std;
void reverse(int arr[],int st,int ed) {
    for(int i=0,j=ed;i<j;i++,j--) {
        int temp = arr[st];
        arr[st] = arr[ed];
        arr[ed] = temp;
        st++;
        ed--;
    }
}
int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    int st,ed;
    int n = 8;
    // call function 
    reverse(arr,2,7);
    // reverse kth position
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}