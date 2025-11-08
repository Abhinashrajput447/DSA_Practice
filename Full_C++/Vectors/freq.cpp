#include<iostream>
#include<unordered_map>
using namespace std;


int main() {
  int arr[8] = {1,1,2,1,2,3,3,2};
  unordered_map<int, int> a;
  int n = 8;
  
  for(int i=0; i<n; i++) {
    int freq = 0;
    for(int j=i+1; j<n; j++) {
      if(arr[i] == arr[j]) {
        freq++;
      }
    }
    cout << freq << " ";
  }
  
  return 0;
}