#include <iostream>
#include <algorithm>
using namespace std;

double xToThePowN(double x, int n) {
    if(x == 1) return x;
    if(n == 1) return x;
    if(x == 0) return 0;
    if(n == 0) return 0;

    double ans = 1.0;
    int exp = n;

    if(exp < 0) {
        exp = -exp;
        x = 1/x;
    }

    while(exp > 0) {
        if(exp % 2 != 0) {
            ans *= x;
        }
        // cout << ans << ", " << x << endl;
        x *= x;
        cout << ans << ", " << x << endl;
        exp /= 2;
    }
    return ans;
}

int main() {
    xToThePowN(2.0, 10);

    // cout << ans << endl;
    return 0;
}