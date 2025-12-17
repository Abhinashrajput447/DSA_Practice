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

  ~Node() { // destrcutor for Node because we created here next using poinr by dynamic memory allocation 
    if(next != NULL) {
      // cout << "~Node " << data << endl;
      delete next;
      next = NULL;
    }
  }
};

class List {
public:
  Node* head;
  Node* tail;
  
  List() { // constructor 
    head = NULL;
    tail = NULL;
  }

  ~List() { // destructor for deleting dynamic mem created 
    // cout << "~list \n"; 
    if(head != NULL) {
      delete head;
      head = NULL;
    }
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
 
  void printList() {
    Node* temp = head;

    while(temp != NULL) {
      cout << temp -> data << " -> ";
      temp = temp -> next;
    }

    cout << "NULL\n";
  }

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

  void pop_front() {
    if(head == NULL) {
      cout << "LL is empty\n";
      return;
    }
    Node* temp = head;
    head = (*head).next;
    temp -> next = NULL;
    delete temp;
  }

  void pop_back() {
    if(head == NULL) {
      cout << "LL is empty\n";
      return;
    }

    Node* temp = head;
    while(temp -> next -> next != NULL) {
      temp = temp -> next;
    }

    temp -> next = NULL;
    delete tail;
    tail = temp;
  }

  int searchIterative(int val) { // TC => O(n)
    Node* temp = head;
    int idx = 0;

    while(temp != NULL) {
      if(temp->data == val) {
        return idx;
      }
      idx++;
      temp = temp -> next;
    }
    return -1;
  }

  int helper(Node* temp, int key) {
    if(temp == NULL) {
      return -1;
    }

    if(temp -> data == key) {
      return 0;
    }

    int idx = helper(temp -> next, key);
    if(idx == -1) {
      return -1;
    }
    return idx+1;
  }

  int searchRecc(int key) {
    return helper(head, key);
  }

  void reverseLL() {
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
      Node* next = curr -> next;
      curr -> next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
  }
};


int main() {
  List ll;
  ll.push_back(30);
  ll.push_back(20);
  ll.push_back(10);
  ll.push_back(5);
  ll.printList();
  ll.reverseLL();
  ll.printList();
  return 0;
}