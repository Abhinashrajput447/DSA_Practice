#include<iostream>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    char ch = 'A';
    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}