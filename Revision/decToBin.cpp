#include<iostream>
using namespace std;

int binToDec(int bin) {
    int dec=0, pow = 1;
    while(bin != 0) {
        int ld = bin%10;
        dec += (ld*pow);
        bin /= 10;
        pow *= 2;
    }
    return dec;
}
int main() {
    int bin;
    cin >> bin;
    cout << binToDec(bin);
    return 0;
}