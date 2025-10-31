#include<iostream>
using namespace std;

int main() {
    int matrix[4][3];
    int rows = 4;  // 2 d arrays
    int cols = 3;

    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    // matrix[2][1] = 12;
    // cout << matrix[2][1] << endl;


    for(int i=0;i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}