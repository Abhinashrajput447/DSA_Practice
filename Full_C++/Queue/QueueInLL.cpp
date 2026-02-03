#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int val) {
    this -> data = val;
    this -> next = NULL;
  }
};

class Queue {
  Node* head;
  Node* tail;
public:
  Queue() {
    head = tail = NULL;
  }

  void push(int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
      head = tail = newNode;
    }else{
      tail -> next = newNode;
      tail = newNode;
    }
  }


  void pop() {
    if(isEmpty()) {
      cout << "Queue is empty\n";
      return;
    }

    Node* temp = head;
    head = head -> next;
    delete temp;
  }

  int front() {
    if(isEmpty()) {
      cout << "Queue is empty\n";
      return -1;
    }
    return head -> data;
  }

  Node* getHead() {
    return head;
  }

  bool isEmpty() {
    return head == NULL;
  }

};

void display(Node* head) {
  Node* temp = head;

  if(head == NULL) {
    return;
  }else{
    while(temp != NULL) {
      cout << temp -> data << "-->";
      temp = temp -> next;
    }
  }
  cout << "\n";
}

int main() {
  Queue q;

  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);

  display(q.getHead());
  // q.pop();
  // q.display();
  // q.pop();
  // cout << q.front()  << "\n";

  // q.pop();
  // cout << q.front()  << "\n";

  // while(!q.isEmpty()) {
  //   cout << q.front() << "-->";
  //   q.pop();
  // }
  return 0;
}