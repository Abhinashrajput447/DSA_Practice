#include<iostream>
#include<vector>
using namespace std;

// int partition(vector<int>& arr, int st, int end) {
//     int idx = st-1, pivit = arr[end];

//     for(int i=st; i<end; i++) {
//         if(arr[i]  <= pivit) {
//             idx++;
//             swap(arr[i], arr[idx]);
//         }
//     }

//     idx++;
//     swap(arr[end],arr[idx]);

//     return idx;
// }

// void quickSort(vector<int>& arr, int st, int end) {
//     if(st < end) {
//         int pivit = partition(arr, st ,end);

//         quickSort(arr, st, pivit-1); // left part

//         quickSort(arr, pivit+1, end);
//     }
// }

int partition(vector<int>& arr, int si, int ei) {
    int i = si-1;
    int pivit = arr[ei];

    for(int j=si; j<ei; j++) {
        if(arr[j] <= pivit) {
            swap(arr[++i], arr[j]);
        }
    }
    swap(arr[++i], arr[ei]);

    return i;
}

void quickSort(vector<int>& arr, int si, int ei) {
    if(si >= ei) {
        return;
    }

    int pivitIdx = partition(arr, si, ei);

    quickSort(arr, si, pivitIdx-1);
    quickSort(arr, pivitIdx+1, ei);
}

int main() {
    vector<int> arr = {5,3,2,2,1,4};

    quickSort(arr, 0, arr.size()-1);

    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
