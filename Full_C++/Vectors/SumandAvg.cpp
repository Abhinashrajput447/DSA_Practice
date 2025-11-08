#include<iostream>
using namespace std;

int main() {
    int n,sum = 0;
    cout << "Enter size of arry : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "You entered : \n";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
        sum +=arr[i];
    }
    cout << " \nSum = ";
    cout << sum << endl;
    int avg = sum/n;
    cout <<"Agerage = " <<  avg << endl;
    
    return 0;
}
