#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void dfs(vector<vector<char>>& grid, int r, int c) {
    // Base case: water and bound
    if(r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c] == '0') {
        return;
    }   

    grid[r][c] = '0';

    // Explore all 4 directions
    dfs(grid, r+1, c);
    dfs(grid, r-1, c);
    dfs(grid, r, c+1);
    dfs(grid, r, c-1);
}


int nOfIsLand(vector<vector<char>>& grid) {
    if(grid.empty()) return 0;
    int landCnt = 0;

    for(int i=0; i<grid.size(); i++) {
        for(int j=0; j<grid[0].size(); j++) {
            if(grid[i][j] == '1') {
                landCnt++;
                dfs(grid, i, j);
            }
        }
    }
    return landCnt;
}


int main() {
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '1'},
        {'0', '1', '0', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'0', '0', '0', '0', '1'}
    };

    cout << nOfIsLand(grid) << endl;
    return 0;
}