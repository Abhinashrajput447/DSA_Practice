#include<iostream>
using namespace std;

string isPrime(int n) {
    for(int i=2; i*i <= n;i++) {
        if(n % i == 0) {
            return "non prime";
        }
    }
    return "prime";
}
int main() {
    int n;
    cin >> n ;

    cout << isPrime(n) << endl;
    return 0;
}