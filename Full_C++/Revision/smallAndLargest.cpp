#include <iostream>
#include <algorithm>  // ✅ required for min() and max()
using namespace std;

void smalandlar(int arr[], int n) {
    int smallest = INT32_MAX;
    int larget = INT32_MIN;

    for (int i = 0; i < n; i++) {
        smallest = min(arr[i], smallest);
        larget = max(arr[i], larget);
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << larget << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    smalandlar(arr, n);

    return 0;
}
