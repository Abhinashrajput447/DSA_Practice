#include<iostream>
using namespace std;

int diogonalSum(int matrix[][3], int rows, int cols, int n ) { 
    int diogSum = 0;
    for(int i=0;i<rows;i++) {
        // for(int j=0;j,cols;j++) {  // TC => O(n*n)
        //     if(i==j) {
        //         diogSum += matrix[i][j];
        //     }else if(j=n-1-i) {
        //         diogSum += matrix[i][j];
        //     }
        // }
        diogSum += matrix[i][i]; // TC => O(n);
        if(i != n-i-1) {
            diogSum += matrix[i][n-i-1];
        }
    }
    return diogSum;
}
int main() {
    int matrix[3][3];
    int rows = 3, cols = 3, n = 3;
    for(int i=0; i<rows; i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }

    cout << diogonalSum(matrix, rows, cols, n) << endl;
    return 0;
}