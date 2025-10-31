#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;

    for(int i=0;i<n;i++) { // outer loop 
        // int a = 65;
        char ch = 'A';
        for(int j=0;j<n;j++) { // inner loop
            // char ch = (char)a;
            cout << ch << " ";
            ch+=1;
        }
        cout << endl;
    }
    return 0;
}