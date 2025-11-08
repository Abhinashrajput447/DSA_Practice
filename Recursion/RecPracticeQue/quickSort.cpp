#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end) {
    int idx = st-1, pivit = arr[end];

    for(int i=st; i<end; i++) {
        if(arr[i]  <= pivit) {
            idx++;
            swap(arr[i], arr[idx]);
        }
    }

    idx++;
    swap(arr[end],arr[idx]);

    return idx;
}

void quickSort(vector<int>& arr, int st, int end) {
    if(st < end) {
        int pivit = partition(arr, st ,end);

        quickSort(arr, st, pivit-1); // left part

        quickSort(arr, pivit+1, end);
    }
}

int main() {
    vector<int> arr = {5,3,2,1,4};

    quickSort(arr, 0, arr.size()-1);

    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
