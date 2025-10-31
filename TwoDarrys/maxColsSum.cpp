#include<iostream>
#include<climits>
using namespace std;

int getMaxSum(int matrix[][3] , int rows, int cols) {
    int maxColSum = INT_MIN;

    for(int i=0;i<rows; i++) {
        int colSum = 0;
        for(int j=0;j<cols;j++) {
            colSum += matrix[j][i];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
}
int main() {
    int matrix[3][3];
    int rows = 3, cols = 3;

    // Input from user
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }

    cout << getMaxSum(matrix, rows, cols) << endl;
    return 0;
}