#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    
    for(int i=0;i<n;i++) {
        //int a = 1;
        for(int j=1;j<=i+1;j++) {
            cout << j;
            //a++;
        }
        cout << endl;
    }
    return 0;
}