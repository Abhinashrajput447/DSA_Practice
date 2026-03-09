#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printSudoku(vector<vector<string>>& board) {
  int n=board.size();
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

bool isSafe(vector<vector<string>>& board, int row, int col, string dig) {
    // row
    for(int j = 0; j < 9; j++) {
        if(board[row][j] == dig) return false;
    }

    // column
    for(int i = 0; i < 9; i++) {
        if(board[i][col] == dig) return false;
    }

    // 3x3 grid
    int strow = (row / 3) * 3;
    int stcol = (col / 3) * 3;

    for(int i = strow; i < strow + 3; i++) {
        for(int j = stcol; j < stcol + 3; j++) {
            if(board[i][j] == dig) return false;
        }
    }
    return true;
}


bool sudokuSolver(vector<vector<string>> board, int row, int col) {
  if(row == 9) { // base case
    printSudoku(board);
    return true;
  }
  int nextRow = row;
  int nextCol = col+1;
  if(nextCol == 9) {
    nextRow = row+1;
    nextCol = 0;
  }

  if(board[row][col] != ".") {
    return sudokuSolver(board, nextRow, nextCol);
  }


  for(int d='1'; d<='9'; d++) {
    string dig = to_string(d);
    if(isSafe(board, row, col, dig)) {
      board[row][col] = dig;
      if(sudokuSolver(board, nextRow, nextCol)) {
        return true;
      }
      board[row][col] = ".";
    }
  }
  return false;

}


int main() {
  vector<vector<string>> board = {
      {"5","3",".",".","7",".",".",".","."},
      {"6",".",".","1","9","5",".",".","."},
      {".","9","8",".",".",".",".","6","."},
      {"8",".",".",".","6",".",".",".","3"},
      {"4",".",".","8",".","3",".",".","1"},
      {"7",".",".",".","2",".",".",".","6"},
      {".","6",".",".",".",".","2","8","."},
      {".",".",".","4","1","9",".",".","5"},
      {".",".",".",".","8",".",".","7","9"}};
 

      sudokuSolver(board, 0, 0);
  return 0;
}