#include <stdio.h>

int reverse(int x) {
    long long ld;
    long long rev = 0;
    while(x > 0) {
        ld = x % 10;
        rev = rev * 10 + ld;
        x = x / 10;
    }
    return rev;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", reverse(n));
    return 0;
}
