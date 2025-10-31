#include<iostream>
using namespace std;

int binToDec(int bin) {
    int pow = 1, dec = 0;  //pow = 1 -> 2^0 -> ++
    while(bin!=0) {
        int ld = bin%10;
        bin/=10;
        dec+=(ld*pow);
        pow*=2;
    }
    return dec;
}

int main() {
    int bin;
    cin >> bin;

    cout << binToDec(bin) << endl;
    return 0;
}