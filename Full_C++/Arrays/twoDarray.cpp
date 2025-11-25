#include<iostream>
using namespace std;

int main() {
  int n = 4, m = 4;
  int stRow = 0, stCol = 0,
      endRow = n-1, endCol = m-1;
  int twoD[n][m] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};

  while(stRow <= endRow && stCol <= endCol) {
    for(int i=stCol; i<=endCol; i++) {
      cout << twoD[stRow][i] << " ";
    }
    for(int j=stRow+1; j<=endRow; j++) {
      cout << twoD[j][endCol] << " ";
    }
    for(int i=endCol-1; i>=stCol; i--) {
      if(stRow == endRow) break;
      cout << twoD[endRow][i] << " ";
    }
    for(int j=endRow-1; j>=stRow+1; j--) {
      if(stCol == endCol) break;
      cout << twoD[j][stCol] << " ";
    }
    stRow++;endRow--;stCol++;endCol--;
  }
  cout << "\n";

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cout << twoD[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
