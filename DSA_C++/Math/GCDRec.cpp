#include<iostream>
using namespace std;

int GCDRec(int a , int b) {
    if(b == 0) return a;
    return GCDRec(b, a % b);
}
int main() {
    int a, b;
    cin >> a >> b ;

    cout << GCDRec(a, b) << endl;
    return 0;
}