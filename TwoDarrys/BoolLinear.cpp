#include<iostream>
using namespace std;

bool linearSearch(int matrix[3][3], int target) {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(matrix[i][j]==target) {

                return true;
                
            }
        }
    }
    return false;
}
int main() {
    int matrix[3][3];
    int target = 19;
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    cout << linearSearch(matrix, target) << endl;
    return 0;
}