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

  void insert(int val, int pos) {
    Node* newNode = new Node(val);

    Node* prev = head;
    for(int i=0; i<pos-1; i++) {
      if(prev == NULL) {
        cout << "LL is Invalid \n";
        return;
      }
      prev = prev -> next;
    }
    
    newNode -> next = prev -> next;
    prev -> next = newNode;
  }
};


int main() {
  List ll;
  ll.push_back(30);
  ll.push_back(20);
  ll.push_back(10);
  ll.push_back(5);
  ll.push_back(10);
  ll.insert(100, 2);
  ll.printList2();
  return 0;
}