#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};

    
    int* ptr1;
    int* ptr2 = ptr1;

    cout << (ptr1 == ptr2)<< endl;

    return 0;
}