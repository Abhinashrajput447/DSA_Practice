#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string str;
    int a;
    char c;
    int cnt = 0;
    cout << "string " << "char" << "k th position" << endl;
    cin >> str >> c >> a;


    for(int i=0; i<str.length(); i++) {
        if(c == str[i]) {
            cnt++;

            if(cnt == a) {
                cout << i << endl;
                break;
            }
            
        }
    }
    
    return 0;
}