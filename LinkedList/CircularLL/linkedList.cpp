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

  // ~Node() { // destrcutor for Node because we created here next using poinr by dynamic memory allocation 
  //   if(next != NULL) {
  //     // cout << "~Node " << data << endl;
  //     delete next;
  //     next = NULL;
  //   }
  // }
};

class List {
public:
  Node* head;
  Node* tail;
  
  List() { // constructor 
    head = NULL;
    tail = NULL;
  }

  // ~List() { // destructor for deleting dynamic mem created 
  //   // cout << "~list \n"; 
  //   if(head != NULL) {
  //     delete head;
  //     head = NULL;
  //   }
  // }

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

// merger sort algoritham / merge two list

Node* splitAtMid(Node* head) {
  Node* slow = head;
  Node* fast = head;
  Node* prev = NULL;

  while(fast != NULL && fast -> next != NULL) { 
    prev = slow;
    slow = slow -> next;
    fast = fast -> next -> next;
  }

  if(prev != NULL) { // for small node kile if list has only one node
    prev -> next = NULL; // split at middle
  }

  return slow; // slow = rightHead
}

Node* merge(Node* left, Node* right) {
  List ans;
  Node* i = left;
  Node* j = right;

  while( i != NULL && j != NULL) {
    if(i->data <= j -> data) {
      ans.push_back(i -> data);
      i = i -> next;
    }else{
      ans.push_back(j -> data);
      j = j -> next;
    }
  }

  while(i != NULL) {
    ans.push_back(i -> data);
    i = i -> next;
  }

  while(j != NULL) {
    ans.push_back(j -> data);
    j = j -> next;
  }

  return ans.head;
}

Node* mergeSort(Node* head) {
  if(head == nullptr || head -> next == nullptr) {
    return head;
  }
  Node* rightHead = splitAtMid(head);

  Node* left = mergeSort(head);
  Node* right = mergeSort(rightHead);

  return merge(left, right); // head of sorted ll 
}

Node* splitAtMidd(Node* head) {
  Node* slow = head;
  Node* fast = head;
  Node* prev = NULL;

  while(fast != NULL && fast -> next != NULL) {
    prev = slow;
    slow = slow -> next;
    fast = fast -> next -> next;
  }

  if(prev != NULL) {
    prev -> next = NULL;
  }

  return slow;  
}

Node* reverse(Node* rightHead) {
  Node* prev = NULL;
  Node* curr = rightHead;

  while(curr != NULL) {
    Node* next = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = next;
  }

  return prev;
}

Node* zigZagLL(Node* head) {

  Node* rightHead = splitAtMidd(head);
  Node* rightHeadRev = reverse(rightHead);

  // alternate merging
  Node* left = head;
  Node* right = rightHeadRev;
  Node* tail = right;

  while(left != NULL && right != NULL) {
    Node* leftNext = left -> next;
    Node* rightNext = right -> next;

    left -> next = right;
    right -> next = leftNext;

    tail = right;

    left = leftNext;
    right = rightNext;
  }

  if(right != NULL) { // for odd size LL
    tail -> next = right;
  }

  return head;
}

int main() {
  List ll;
  ll.push_back(1);
  ll.push_back(2);
  ll.push_back(3);
  ll.push_back(4);
  ll.push_back(5);

  ll.printList();
  ll.head = zigZagLL(ll.head);
  // ll.printList();
  ll.printList();
  
  return 0;
}