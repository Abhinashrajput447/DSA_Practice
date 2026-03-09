#include<iostream>
using namespace std;

int main() {
    int row;
    cin >> row;

    int a = 1;
    for(int i=1; i<=row; i++) {
        for(int j=i; j>=1; j--) {
            cout << a << " ";
            
        }
        a++;
        cout << endl;
    }
    return 0;
}