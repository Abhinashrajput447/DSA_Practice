#include<iostream> 
using namespace std;

class CricularQueue {
  int* arr;  // dynamic array
  int currSize, cap;
  int f, r ; // f => front, r => rear

public:
  CricularQueue(int size) {
    cap = size;
    arr = new int(cap);
    currSize = 0;
    f = 0;
    r = -1;
  }

  void push(int data) {   // O(1)
    if(currSize == cap) {
      cout << "CircularQueue is Full\n";
      return;
    }

    r = (r+1) % cap;
    arr[r] = data;
    currSize++;
  }

  void pop() {   // O(1)
    if(empty()) {
      cout << "CQ is EMPTy\n";
      return;
    }

    f = (f+1) % cap;
    currSize--;
  }

  int front() {   // O(1)
    if(empty()) {
      cout << "QC is EMPTY\n";
      return -1;
    }
    return arr[f];
  }

  bool empty() {   // O(1)
    return currSize == 0;
  }

  void printArr() {   // printing array
    for(int i=0; i<cap; i++) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

};

int main() {
  CricularQueue cq(3);

  cq.push(10);
  cq.push(20);
  cq.push(30);
  cq.pop();
  cq.push(40);

  // cq.printArr();

  while(!cq.empty()) {
    cout << cq.front() << " ";
    cq.pop();
  }
  cout << "\n";

  return 0;
}