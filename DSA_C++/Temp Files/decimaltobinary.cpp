#include<iostream>
using namespace std;

int decToBin(int dec) {
    int bin = 0, pow = 1; 
    while(dec!=0) {
        int rem = dec%2;
        dec = dec/2;
        bin += (rem*pow);
        pow *=10;
    }
    return bin;
}

int main() {
    int dec;
    cout << "Enter the decimal number : ";
    cin >> dec;
    cout << decToBin(dec);
    // for(int i=1;i<=dec;i++) {
    //     cout << i << " = " << decToBin(i) << endl; 
    // }
    
    return 0;
}