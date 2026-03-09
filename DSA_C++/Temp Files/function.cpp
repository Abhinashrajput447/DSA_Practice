#include<iostream>
using namespace std;

void weak(int n) {
    switch(n) {
        case 1 : cout << "Monday" <<endl;
        break;
        case 2 : cout << "Tuesday" << endl;
        break;
        case 3 : cout << "Wednesday" << endl;
        break;
        case 4 : cout << "Trusday" << endl;
        break;
        case 5 : cout << "Friday" << endl;
        break;
        case 6 : cout << "Saturday" << endl;
        break;
        case 7 : cout << "Sunday" << endl;
        break;
        default : cout << "Invalid day" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    weak(n);
    return 0;
}