#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    //upper part
    for (int i=1;i<=n;i++) {
        //stars
        for(int j=1;j<=i;j++) {
            cout << '*';
        }
        // spaces
        for(int k=6;k>=2;k-=2) {
            cout << " ";
        }
        //stars
        int a = i-1;
        for(int l=1;l<=i-1;l++) {
            cout << '*';
            a--;
        }
        cout << endl
    }
     

    return 0;
}