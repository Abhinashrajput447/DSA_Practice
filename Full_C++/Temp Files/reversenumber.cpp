#include<iostream>
using namespace std;
int reverse(int x) {
    long long rev = 0;
    while(x!=0) {
        int ld = x%10;
        rev = rev*10+ld;
        x = x/10;
    }
    if(rev>INT32_MAX || rev<INT32_MIN) return 0;
    return rev;
}

int main() {
    int n;
    cin >> n;
    cout << reverse(n);

    return 0;
}