#include <iostream>
#include <queue>
using namespace std;

class Stack {
  queue<int> q1, q2;
public:
  void push(int val) {
    // Q1 -> Q2
    while(!q1.empty()) {
      q2.push(q1.front());
      q1.pop();
    }

    q1.push(val);
    // Q2 -> Q1
    while(!q2.empty()) {
      q1.push(q2.front());
      q2.pop();
    }
  }

  int top() {
    if(q1.empty()) {
      return -1;
    }
    return q1.front();
  }

  void pop() {
    if(q1.empty()) {
      cout << "Stack is Empty\n";
      return;
    }
    q1.pop();
  }

  bool isEmpty() {
    return q1.empty();
  }
};

int main() {
  Stack s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  cout << s.top() << "\n";
  s.pop();
  cout << s.top();

  while(!s.isEmpty()) {
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}