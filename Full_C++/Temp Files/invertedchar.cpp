#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nsp = n-1, nst = 1;

    for(int i=1;i<=n;i++) {
        // spaces
        for(int j=1;j<=nsp;j++) {
            cout << " ";
        }
        nsp--;
        //numbersq
        for(int k=1;k<=nst;k++) {
            cout << k;
        }
        nst++;
        int a = i-1;
        for(int l=1;l<=i-1;l++) {
            cout << a;
            a--;
        }
        cout << endl;
    }
    return 0;
}
