#include <iostream>
#include <vector>
using namespace std;

void heapify(int i, vector<int>& arr, int n) { // TC => O(logN)
    int leftIdx = 2*i+1;
    int rightIdx = 2*i+2;
    int parIdx = i;

    if(leftIdx < n && arr[leftIdx] > arr[parIdx]) {
        parIdx = leftIdx;
    }

    if(rightIdx < n && arr[rightIdx] > arr[parIdx]) {
        parIdx = rightIdx;
    }

    if(parIdx != i) {
        swap(arr[i], arr[parIdx]);
        heapify(parIdx, arr, n);
    }
}

void heapSort(vector<int>& arr) { // TC => O(N*logN)
    int n = arr.size();

    //step1 : built maxHeap
    for(int i=n/2-1; i>=0; i--) { // TC => O(N*logN)
        heapify(i, arr, n); // passing n is must imp for heap sort
    }

    //step2: taking else to correct position
    for(int i=n-1; i>=0; i--) { // TC => O(N*logN)
        swap(arr[0], arr[i]);
        heapify(0, arr, i);
    }
}


int main() {
    vector<int> arr = {1,4,2,5,3};

    heapSort(arr);

    for(int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
