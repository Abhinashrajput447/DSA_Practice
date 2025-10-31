#include<iostream>
#include<climits>
using namespace std;
int getMaxSum(int matrix[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;
    for(int i=0;i<rows;i++) {
        int rowSum = 0;
        for(int j=0;j<cols;j++) {
            rowSum += matrix[i][j];
        }

        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}
int main() {
    int matrix[3][3];
    int rows = 3, cols = 3;
    for(int i=0;i<rows; i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }

    cout << getMaxSum(matrix, rows, cols) << endl;

    return 0;
}