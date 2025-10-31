#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array \n";
    cin >> n;

    int arr[n];
    cout << "Enter elements of an array : \n";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cout << "Elements of an array are : \n";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}