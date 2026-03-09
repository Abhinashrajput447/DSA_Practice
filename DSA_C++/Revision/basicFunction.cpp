#include<iostream>
using namespace std;

//function defenation
int factorial(int n) {
    int digSum = 0;
    while(n > 0) {
        int ld = n % 10;
        digSum += ld;
        n /= 10;
    }
    return digSum;
}
int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
