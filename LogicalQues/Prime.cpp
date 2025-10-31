#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    if(n<=0) {
        cout << "invalid number";
        
    }
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            cout << "Non prime";
            break;
        }else{
            cout << "prime";
            break;
        }
    }
    
    return 0;
}