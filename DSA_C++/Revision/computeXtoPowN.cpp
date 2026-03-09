#include<iostream>
#include<vector>
using namespace std;

double myPow(double x, int n) {
    if(x == 0) return 0.0;
    if(n == 0) return 1.0;

    long long binForm = n;
    double ans = 1.0;

    if(binForm < 0) {
        x = 1 / x;
        binForm = -binForm;
    }

    while(binForm > 0) {
        if(binForm % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}


int main() {
    double x, n;
    cin >> x >> n;

    cout << myPow(x, n);
    return 0;
}

