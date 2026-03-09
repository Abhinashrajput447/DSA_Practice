#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> addition(vector<vector<int>>& A, vector<vector<int>>& B) {
    int m = A.size(), n = A[0].size();
    int p = B.size(), q = B[0].size();
    vector<vector<int>> result(n, vector<int>(m));

    if(m==n && p==q) {
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                result[i][j] = A[i][j]+B[i][j];
            }
        }
    }
    return result;   
}

int main() {
    vector<vector<int>> addition(vector<vector<int>> A, vector<vector<int>> B);
    int m,n,p,q;
    cin >> m >> n >> p >> q;
    vector<vector<int>> A[m][n];
    vector<vector<int>> B[p][q];

    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> A[i][j];
        }
    }
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> B[i][j];
        }
    }
   
    
    return 0;
}
