#include<iostream>
#include<vector>
using namespace std;

// inversion count TC => O(n^2);

// int countIverstion(int arr[], int n) {
//     int ctInversion = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(arr[i] > arr[j]) {
//                 ctInversion ++;
//             }
//         }
//     }
//     return ctInversion;
// }


//by using merge sort

// void merge(vector<int>& arr, int st, int mid, int end) {
//     vector<int> temp;
//     int i = st, j = mid+1;

//     if(st < end) {
//         while(i <= mid && j <= end) {
//             if(arr[i] <= arr[j]) {
//                 temp.push_back(arr[i]);
//                 i++;
//             }else{
//                 temp.push_back(arr[j]);
//                 j++;
//             }

//         }
//     }
//     while(i <= mid) {
//         temp.push_back(arr[i]);
//         i++;
//     }
//     while(j <= mid) {
//         temp.push_back(arr[j]);
//         j++;
//     }

//     for(int idx=0; idx<temp.size(); idx++) {
//         arr[idx+st] = temp[idx];
//     }

// }

// void mergeSort(vector<int>& arr, int st, int end) {

//     if(st < end) {
//         int mid = st + (end-st)/2;

//         mergeSort(arr, st, mid); // left half

//         mergeSort(arr, mid+1, end); // right half

//         merge(arr, st, mid, end);

//     }
// }

int merge(vector<int>& arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid+1;
    int invCount = 0;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invCount += (mid - i + 1);

        }
    }

    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0; idx<temp.size(); idx++) {
        arr[st + idx] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int>& arr, int st, int end) {
    if(st < end) {
        int mid = st + (end - st) / 2;
        int leftInvCount = mergeSort(arr, st, mid); //  left half
        int rightInvCount = mergeSort(arr, mid+1, end);  // right half
        int invCount = merge(arr, st, mid, end); // invcount => inversion count

        return leftInvCount + rightInvCount + invCount;
    }
    return 0;
}

int main() {
    vector<int> arr = {6,3,5,2,7};

    int ans = mergeSort(arr, 0, arr.size()-1);

    cout << ans;
    return 0;
}