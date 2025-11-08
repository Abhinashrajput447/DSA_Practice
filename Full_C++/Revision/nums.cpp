#include<iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int a = 1;
    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}