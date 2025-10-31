#include<iostream>
#include<vector>
using namespace std;

int main() {
    int rows, cols ;
    cout << "Enter rows and cols : " << endl;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "enter elements : " << endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin >> matrix[i][j];
        }
    }

    cout <<"Matrix is :" << endl;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}