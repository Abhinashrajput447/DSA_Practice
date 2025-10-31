#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec;
    cout << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(45);
    vec.push_back(15);
    vec.push_back(25);
    cout << "after push back size : " << vec.size() <<endl;

    vec.pop_back();
    for(int i : vec) {
        cout << i << endl;
    }

    cout << vec.front() << endl;
    cout << vec.back();
    cout << vec.at(0) << endl;

    for(int i : vec) {
        cout << i << " ";
    }
    

    
    return 0;
}

