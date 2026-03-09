#include<iostream>
using namespace std;
int reverse(int n) {
    long long int rev = 0;
    while(n!=0) {
        int ld = n%10;
        rev = rev*10+ld;
        n=n/10;
    }
    if(rev>INT32_MAX || rev < INT16_MIN) {
        return 0;
    }
    return rev;
}

int main() {  
    int n;
    cin >> n;
    cout << reverse(n);
    

    return 0;
}