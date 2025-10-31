#include<iostream>
#include<vector>
using namespace std;

vector<pair<int , int>> linearSearch(int matrix[3][3], int target, int rows, int cols) {
    vector<pair<int, int>> idx;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(matrix[i][j] == target) {
                idx.push_back({i,j}); // store rows & cols
            }
        }
    }
    return idx;
}
int main() {
    int matrix[3][3];
    int target = 15;
    int rows = 3, cols = 3;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }
    // search 
    vector<pair<int, int>> found = linearSearch(matrix, target, rows, cols);

    if(!found.empty()) {
        cout << "Target found at idx"<< endl;
        for(auto p : found) {
            cout << "("<<p.first<<", "<< p.second<< ")\n";
        }
    }else{
        cout << "Target not found \n";
    }
    return 0;
}