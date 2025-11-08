#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    int x, n;

    cout << "enter size of a vector" << endl;
    cin >> n ;
    for(int i=0; i<n; i++) {
        cin >> x ;
        vec.push_back(x);
    }

    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

