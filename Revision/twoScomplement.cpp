#include<iostream>
using namespace std;

int decToBin(int dec) {
    int bin = 0 , pow = 1;
    while(dec!=0) {
        int ld = dec%2;
        dec /= 2;
        pow *= 10;
    }
    return bin;
}
int oneScompliment(int bin) {
    int ones=0;
    cout << decToBin(bin);
    int ld = bin%10;
    if(ld == 1) {
        return 0;
    }else {
        return 1;
    }
    ones += 
    

}
int main() {
    int dec;
    cin >> dec;

    cout << decToBin(dec);
    return 0;
}