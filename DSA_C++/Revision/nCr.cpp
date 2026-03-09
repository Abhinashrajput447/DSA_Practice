#include<iostream>
using namespace std;

int factorial(int x) {
    int fact = 1;
    for(int i=1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r) {
    int ncr = factorial(n)/(factorial(r)* factorial(n-r));
    return ncr;
}
int main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n , r);
    return 0;
}
