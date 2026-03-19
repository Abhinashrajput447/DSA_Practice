#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end) {  // TC => O(n*logn) sc => O(n)
    vector<int> temp;

    int i = st, j = mid+1;

    while(i <= mid && j <= end) {
        if(arr[i] >= arr[j]) {
            temp.push_back(arr[j]);
            j++;
        }else{
            temp.push_back(arr[i]);
            i++;
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++) {
        arr[idx + st] = temp[idx];
    }
    
}

void mergeSort(vector<int>& arr, int st, int end) {
    // if(st >= end) return;

    if(st < end) {
        int mid = st + (end - st)/2;

        //left half
        mergeSort(arr, st, mid);

        //right half
        mergeSort(arr, mid+1, end);

        merge(arr,st, mid, end);
    } 
}

int main() {
    vector<int> arr = {12,31,35,8,32,1,17};

    mergeSort(arr, 0, arr.size()-1);

    for(int val : arr) {
        cout << val << " ";
    }

    return 0;
}