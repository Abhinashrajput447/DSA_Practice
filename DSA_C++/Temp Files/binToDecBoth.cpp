#include<iostream>
using namespace std;
int decToBin(int dec) {
    int bin=0,pow=1; // pow = 10^0
    while(dec!=0) {
        int rem = dec%2;
        dec/=2;
        bin+=(rem*pow);
        pow*=10;
    }
    return bin;
}
int binToDec(int bin) {
    int dec=0,pow=1; // pow = 2^0
    while(bin!=0) {
        int ld = bin%10;
        bin/=10;
        dec+=(ld*pow);
        pow*=2;
    }
    return dec;
}
int main() {
    int dec;
    int bin;
    cin >> dec >> bin;
    cout <<"Binary = " << decToBin(dec) << endl;
    cout <<"Decimal = " << binToDec(bin) << endl;
    return 0;
}