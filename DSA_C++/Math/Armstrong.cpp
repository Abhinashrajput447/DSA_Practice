#include<iostream>
using namespace std;

bool isArmstrong(int n) {
    int copyN = n;
    int sumOfCobes = 0;

    while(n != 0) {
        int dig = n % 10;
        sumOfCobes += (dig * dig * dig);

        n /= 10;
    }
    return sumOfCobes == copyN;
}
int main() {
    int n;
    cin >> n ;

    if(isArmstrong(n)) {
        cout << "is an armstrong numer\n" << endl;
    }else {
        cout << "not an armstrong numer\n" << endl;
    }
    return 0;
}