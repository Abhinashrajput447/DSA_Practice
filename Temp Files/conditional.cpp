#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number  : ";
    cin >> n;

    bool isPrime = true; 

    // here is two conditions following 
    // i<=n or i*i<=n
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << "Prime number \n";
    }else {
        cout << "Not prime number \n";
    }
    return 0;
}
