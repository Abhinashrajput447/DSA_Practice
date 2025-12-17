#include <iostream>
#include <vector>
#include <string>
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

class List {
public:
  Node* head;
  Node* tail;

  List() {
    head = NULL;
    tail = NULL;
  }

  void push_front(int val) {
    Node* newNode = new Node(val); // dyncamic
  
    if(head == NULL) {
      head = tail = newNode;
    }else{
      newNode -> next = head;
      head = newNode;
    }
  }

  void push_back(int val) { 
    Node* newNode = new Node(val);

    if(head == NULL) {
      head = tail = newNode;
    }else{
      tail -> next = newNode;
      tail = newNode;
    }
  }
 
  // void printList() {
  //   Node* temp = head;

  //   while(temp != NULL) {
  //     cout << temp -> data << " -> ";
  //     temp = temp -> next;
  //   }

  //   cout << "NULL\n";
  // }

  void printList2() {
    while(head != NULL) {
      cout << head -> data << " -> ";
      head = head -> next;
    }

    cout << "NULL\n";
  }
};


int main() {
  List ll;
  ll.push_back(3);
  ll.push_back(2);
  ll.push_back(1);
  ll.printList2();
  return 0;
}