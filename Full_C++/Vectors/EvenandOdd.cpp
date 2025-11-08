#include<iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int even = 0,odd = 0;
    //check odd and even
    for(int i=0;i<n;i++) {
        if(arr[i]%2==0) {
            even++;
        }else{
            odd++;
        }
    }
    cout << even << endl;
    cout << odd << endl;
    return 0;
}