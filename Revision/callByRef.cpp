#include <iostream>
#include <algorithm>  // ✅ required for min() and max()
using namespace std;

void changeArr(int arr[], int n) {
    cout << "In Function" << endl;
    for(int i=0; i<n; i++) {
        arr[i] = 2*arr[i];
        cout << arr[i] << " ";
    }
    
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    changeArr(arr, 5); 

    cout << "In Main" << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
