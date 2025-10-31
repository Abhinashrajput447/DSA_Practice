#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,1,2,3,3,4,4,5,5};
    int n = 9;

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]) {
                cout << -1 << endl;
            }else{
                cout << arr[i];
            }
            
        }
        
    }
    return 0;
}