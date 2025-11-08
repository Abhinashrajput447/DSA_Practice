#include<iostream>
using namespace std;


int remove(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j] ) {
               //shift element left
                for(int k=j;k<n;k++) {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            } 
            
        }
    }
    return n;
}
int main() {
    int arr[8] = {1,2,3,4,5,6,6,1};
    int n = 8;
    n = remove(arr,n);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

