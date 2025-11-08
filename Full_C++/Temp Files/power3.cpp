#include<iostream>
using namespace std;
bool isPowerOf3(int n) {
    if(n<0) return false;
    while(n%3==0) {
        n/=3;
    }
    return n==1;
}
int main() {
    int n;
    cin >> n;
    cout << isPowerOf3(n) ;
    return 0;
}