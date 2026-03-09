#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node* prev;

  Node(int val) {
    this -> data = val;
    prev = next = NULL;
  }
};

class DBL_LL {
public:
  Node* head;
  Node* tail;

  DBL_LL() {
    head = tail = NULL;
  }

  void push_front(int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
      head = tail = newNode;
    }else{
      newNode -> next = head;
      head -> prev = newNode;
      
      head = newNode;
    }
  }
};

void print_DLL(Node* head) {
  Node* temp = head;

  while(temp != NULL) {
    cout << temp -> data << " <=> ";
    temp = temp -> next;
  }
  cout << "NULL" << endl;
}

void pop_front(Node*& head) {
  Node* temp = head;
  head = head -> next;

  if(head != NULL) {
    head -> prev = NULL;
  }

  temp -> next = NULL;
  delete temp;
}


int main() {
  DBL_LL dl;
  dl.push_front(4);
  dl.push_front(3);
  dl.push_front(2);
  dl.push_front(1);

  pop_front(dl.head);
  print_DLL(dl.head);
  return 0;
}