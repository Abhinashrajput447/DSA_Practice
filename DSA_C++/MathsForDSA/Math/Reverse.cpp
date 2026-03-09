#include<iostream>
using namespace std;

int reverse(long n) {
    long rev = 0;
    while(n != 0) {
        if(n > INT32_MAX/10 || n < INT32_MIN/10) {
            return 0;
        }
        int ld = n % 10;
        rev = (rev*10) + ld;
        n /= 10;
    }
    
    return rev;
}
int main() {
    long n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}