#include<iostream> 
#include<vector>
using namespace std;

int main() {
    int matrix[3][3];
    int rows = 3, cols = 3;
    int target = 12;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(matrix[i][j]==target) {
                cout << matrix[i][j] << endl;
                cout << i << " " << j ;
            }
        }
    }
    return 0;
}