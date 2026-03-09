#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    string original = str;

    reverse(str.begin(), str.end());

    if(original==str) {
        cout << "palindrome" << endl;
    }else{
        cout << "not palindrome" << endl;
    }
    return 0;
}