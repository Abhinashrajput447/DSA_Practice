#include<iostream>
using namespace std;


// int main() {
//     int arr[6] = {1,2,3,4,5,6};
//     int larget = INT32_MIN;
//     for(int i=0; i<6; i++) {
//         if(arr[i] > larget) {
//             larget = arr[i];
//         }
//     }
//     cout << larget;
//     return 0;
// }

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    int smallest = INT32_MAX;
    int larget = INT32_MIN;

    for(int i=0; i<size; i++) {
        smallest = min(arr[i], smallest);
        larget = max(arr[i], larget);
    }
    cout << smallest << endl;
    cout << larget ;
    return 0;
}