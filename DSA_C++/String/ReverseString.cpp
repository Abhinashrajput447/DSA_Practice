#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    string str = "Abhinash Rajput";

    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}