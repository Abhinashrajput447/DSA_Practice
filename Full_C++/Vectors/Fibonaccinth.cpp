#include<iostream>
using namespace std;
int fibonacci(int n) {
    if(n<=0) return 0;
    if(n==1) return 1;
    int fibo = fibonacci(n-1) + fibonacci(n-2);
    return fibo;
}
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}