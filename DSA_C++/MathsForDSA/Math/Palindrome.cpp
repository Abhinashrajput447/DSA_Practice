#include<iostream>
using namespace std;

int iSpalindrome(int n) {
    int rev = 0, original = n;
    if(n < 0) return false;
    while(n > 0) {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n /= 10;
    }
    
    return (rev == original);
}
int main() {
    int n;
    cin >> n;

    cout << iSpalindrome(n) << endl;
    return 0;
}