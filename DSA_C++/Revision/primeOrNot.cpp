#include<iostream>
using namespace std;

void prime(int n) {
    bool isPrime = true;
    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }else {
            isPrime = true;
            break;
        }
    }
    if(isPrime == true) {
        cout << "prime";
    }else{
        cout << "not Prime";
    }
}

int main() {
    int n;
    cin >> n;
    prime(n);
    return 0;
}