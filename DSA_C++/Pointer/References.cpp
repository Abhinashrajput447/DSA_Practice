#include<iostream>
#include<vector>
using namespace std;

void changeA(int &b) { // pas by reference using pointer
    b = 20;
}

int main() {
    int a = 10;
    changeA(a);


    cout << "Inside mian fnx : " << a << endl; // 20
    return 0;
}