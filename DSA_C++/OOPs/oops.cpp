#include<iostream>
#include<string>
using namespace std;

void fun() {
    int x = 0;
    cout << "x = " << x << endl;
    --x;
    cout << "x = " << x << endl;
}


int main() {
    fun();
    return 0;
}