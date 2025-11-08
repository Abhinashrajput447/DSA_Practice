#include<iostream>
#include<cmath>
using namespace std;

bool isPowerOf2(int n) {
    if(n<0) return false;
    while(n%2==0) {
        n/=2;
    }
    return n==1;
}


int main() {
    int n;
    cin >> n;
    cout << isPowerOf2(n) << endl;
    return 0;
}