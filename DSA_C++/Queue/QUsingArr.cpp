#include <iostream>
using namespace std;

class Queue {
  int *arr;

  int capacity;
  int currSize;

  int f, r; // f -> front, r -> rear
public:
  Queue(int capacity) {
    this -> capacity = capacity;
    arr = new int[capacity];

    r = 0;
    r = -1;
  }

  void push(int val) {
    if(currSize == capacity) {
      cout << "q is full";
      return;
    }
    r = (r+1)%capacity;
    arr[r] = val;
    currSize++;
  }

  void pop() {
    if(isEmpty()) {
      cout << "Q is empty\n";
      return;
    }
    f = (f+1)%capacity;
    currSize++;
  }

  int front() {
    if(isEmpty()) {
      cout << "Q is Empty\n";
      return -1;
    }
    return arr[f];
  }

  bool isEmpty() {
    return currSize == 0;
  }
};

int main() {
  Queue q(4);
  
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);

  // while(!q.isEmpty()) {

  // }

  cout << q.front();
  return 0;
}