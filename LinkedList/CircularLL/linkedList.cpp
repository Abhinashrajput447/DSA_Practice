#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <iterator>
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

  int getSize() {
    Node* temp = head;
    int sz = 0;

    while(temp != NULL) {
      temp = temp-> next;
      sz++;
    }
    return sz;
  }

  void removeNth(int n) { // TC => O(n)
    int size1 = getSize();
    Node* temp = head;

    Node* prev = head;
    for(int i=1; i<(size1-n); i++) {
      prev = prev -> next;
    } 
    cout << "deleting = " << prev -> next-> data << endl;
    prev -> next = prev -> next -> next;
  }

  bool isPalindrome() {
    vector<int> vals;

    for(Node* p=head; p!=nullptr; p=p->next) {
      vals.push_back(p->data);
    }

    int i=0, n=vals.size(), j=n-1;
    if(n == 1) return true;
    cout << "p";

    while(i < j) {
      if(vals[i] != vals[j]) {
        return false;
      }
      i++;j--;
    }
    return true;
  }
};

bool cycle(Node* head) {
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL && fast->next != NULL) {
    slow = slow -> next; // increse => 1
    fast = fast -> next -> next;  // increse => 2

    if(slow == fast) {
      return true;
    }
  }
  return false;
}

void removeCycle(Node* head) {
  Node* slow = head;
  Node* fast = head;
  bool isCycle = false;
  while(fast != NULL && fast -> next != NULL) {
    slow = slow -> next; // +1
    fast = fast -> next -> next; // +2

    if(slow == fast) {
      cout << "Cycle exists\n";
      isCycle = true;
      break;
    }
  }

  if(!isCycle) {
    cout << "Cycke not Exist\n";
    return;
  }

  slow = head;
  if(slow == fast) {
    while(fast -> next != slow) {
      fast = fast -> next;
    }
    fast -> next = nullptr;
  }else{
    Node* prev = NULL;
    while(slow != fast) {
      slow = slow -> next;
      prev = fast;
      fast = fast -> next;
    }
    prev -> next = nullptr; // remove cycle 
  }
}

void removeElements(Node* head, int val) {
  Node* curr = head;

  Node* prev = NULL;
  while(curr != NULL) {
      if(curr -> data == val) {
          prev -> next = curr -> next;
          curr = curr -> next;
      }else{
          prev = curr;
          curr = curr -> next;
      } 
      
  }

}

void printList(list<int> ll) {
  list<int> :: iterator itr;
    for(itr=ll.begin(); itr!=ll.end(); itr++) {
      cout << (*itr) << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {
  list<int> ll; // like vector type 
  ll.push_back(4);
  ll.push_front(3);
  ll.push_back(4);
  ll.push_front(5);
  // printList(ll);
  // auto itr = ll.begin();
  // advance(itr, 2);
  // ll.insert(itr, 400);
  // cout << ll.size() << endl;
  // printList(ll);
  ll.pop_back();
  printList(ll);
  cout << ll.back();
  return 0;
}