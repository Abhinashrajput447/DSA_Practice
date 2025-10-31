#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // top part
    for(int i=1; i<=n; i++) {  
        // leading spaces
        for(int l=1; l<=n-i; l++) {
            cout << " ";
        }

        cout << "*";

        if(i > 1) {
            // inner spaces
            for(int p=1; p<=2*(i-1)-1; p++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // bottom part
    for(int i=n-1; i>=1; i--) {
        // leading spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        cout << "*";

        if(i > 1) {
            // inner spaces
            for(int j=1; j<=2*(i-1)-1; j++) {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
