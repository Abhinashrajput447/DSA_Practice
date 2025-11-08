#include<iostream>
using namespace std;

int decToBin(int dec) {
    int bin = 0, pow = 1;
    while(dec != 0) {
        int ld = dec%2;
        bin += (pow*ld);
        dec/=2;
        pow *= 10;
    }
    return bin;
}
int main() {
    int dec;
    cin >> dec;
    cout << decToBin(dec);
    return 0;
}