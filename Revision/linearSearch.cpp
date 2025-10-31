#include <iostream>
#include <algorithm>  
using namespace std;

int linearSear(int arr[], int n, int key) {
    for(int i=0; i<n; i++) {
        if(arr[i] == key) {
            return i;
            break;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, key = 13;

    cout << linearSear(arr, n, key);
    return 0;
}

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5, key = 13;

//     for(int i=0; i<n; i++) {
//         if(arr[i] == key) {
//             cout <<key << " is at index : " << i;
//             break;
//         }else {
//             cout << -1 << endl;
//             break;
//         }
//     }
//     return 0;
// }
