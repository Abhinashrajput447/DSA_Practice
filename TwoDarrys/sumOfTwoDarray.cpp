#include<iostream>
using namespace std;

int main() {
    int matrix[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> matrix[i][j];
        }
    }
    int matrixSum = 0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            matrixSum += matrix[i][j];
        }
    }
    cout << matrixSum;
    cout << endl;
    return 0;
}