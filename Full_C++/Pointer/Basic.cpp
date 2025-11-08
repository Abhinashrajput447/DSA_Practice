#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    int** parPtr = &ptr;

    cout << *(&a) << endl;
    return 0;
}