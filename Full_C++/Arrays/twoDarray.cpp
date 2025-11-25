#include<iostream>
using namespace std;

void spiralMatrix(int twoD[][4], int n, int m) {
    int stRow = 0, stCol = 0;
    int endRow = n - 1, endCol = m - 1;

    while (stRow <= endRow && stCol <= endCol) {

        for (int i = stCol; i <= endCol; i++)
            cout << twoD[stRow][i] << " ";

        for (int j = stRow + 1; j <= endRow; j++)
            cout << twoD[j][endCol] << " ";

        if (stRow < endRow) {
            for (int i = endCol - 1; i >= stCol; i--)
                cout << twoD[endRow][i] << " ";
        }

        if (stCol < endCol) {
            for (int j = endRow - 1; j > stRow; j--)
                cout << twoD[j][stCol] << " ";
        }

        stRow++;
        endRow--;
        stCol++;
        endCol--;
    }

    cout << "\n";
}

int main() {
  int n = 4, m = 4;
  int twoD[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};

  spiralMatrix(twoD, n, m);
  
  return 0;
}
