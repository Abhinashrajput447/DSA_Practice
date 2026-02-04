#include <iostream>
#include <deque>
using namespace std;

class Queue {
  deque<int> deq;
public:
  void push(int val) {
    deq.push_back(val);
  }

  void pop() {
    deq.pop_front();
  }

  int front() {
    return deq.front();
  }

  bool isEmpty() {
    return deq.empty();
  }
};

class Stack {
  deque<int> deq;
public:
  void push(int val) {
    deq.push_front(val);
  }

  void pop() {
    deq.pop_front();
  }

  int top() {
    return deq.front();
  }

  bool empty() {
    return deq.empty();
  }
};

class Stack2 {
  deque<int> deq;
public:
  void push(int data) {
    deq.push_back(data);
  }

  void pop() {
    deq.pop_back();
  }

  int top() {
    return deq.back();
  }
};

int main() {
  Stack2 s;
  
  for(int i=1; i<=5; i++) {
    s.push(i);
  }

  // cout << s.top();
  // s.pop();
  // cout << s.top();
  for(int i=0; i<5; i++) {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}