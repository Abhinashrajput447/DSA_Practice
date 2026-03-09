#include<iostream>
using namespace std;

int gcdOfAb(int a, int b) {
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;
    int gcd = 1;
    for(int i=1;i<=min(a, b);i++) {
        if(a%i==0 && b%i==0) {
            gcd = i;
        }
    }
    return gcd;
}
int main() {
    int a, b;
    cin >> a >> b ;
    cout << gcdOfAb(a, b) << endl;

    return 0;
}