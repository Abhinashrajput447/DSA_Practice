#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void printDigit(int n) {
    int digSum = 0;
    while(n != 0) {
        int digit = n  % 10;
        digSum += digit;
        n /= 10;
    }
    cout << digSum << endl;
    
}
int main() {
    int n; 
    cin >> n ;
    
    cout << (int)(log10(n)+1) << endl;
    return 0;
}