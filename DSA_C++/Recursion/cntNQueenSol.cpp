#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print(vector<string>& board) {
    for(string row : board) {
        cout << row << endl;
    }
    cout << "---------" << endl;
}

bool isSafe(vector<string>& board, int row, int col) {
    int n = board.size();

    // check column
    for(int i = 0; i < row; i++) {
        if(board[i][col] == 'Q') return false;
    }

    // left diagonal (up-left)
    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if(board[i][j] == 'Q') return false;
    }

    // right diagonal (up-right)
    for(int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if(board[i][j] == 'Q') return false;
    }

    return true;
}

int nQueen(vector<string>& board, int row) {
    int n = board.size();

    if(row == n) {
        print(board);
        return 1;
    }

    int cnt = 0;
    for(int col = 0; col < n; col++) {
        if(isSafe(board, row, col)) {
            board[row][col] = 'Q';
            cnt += nQueen(board, row + 1);
            board[row][col] = '.';
        }
    }
    return cnt;
}

int main() {
    int n = 4;
    vector<string> board(n, string(n, '.'));

    cout << nQueen(board, 0);
    return 0;
}
