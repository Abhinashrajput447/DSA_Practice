#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1,2,3}, {1,2,3,5,6}, {1,2,3}};

    // rows => matrix.size();
    // cols => matrix[i].soze();
    for(int i=0;i<matrix.size();i++) {
        for(int j=0;j<matrix[i].size();j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // cout << matrix[0][1] << endl;
    return 0;
}