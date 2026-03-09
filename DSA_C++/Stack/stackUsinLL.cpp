#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Node {
public:
  T data;
  Node<T>* next;


  Node(T val) {
    this -> data = val;
    next = NULL;
  }
};

template <class T>
class Stack {
public:
  Node<T>* head;
  Node<T>* tail;

  Stack() {
    head = NULL; 
  }

  void push(T val) {
    Node<T>* newNode = new Node<T>(val);
    if(head == NULL) {
      head = newNode;
    }else{
      newNode -> next = head;
      head = newNode;
    }
  }

  void pop() {
    Node<T>* temp = head;
    head = head -> next;
    temp -> next = NULL;
    delete temp;
  }

  T top() {
    return head -> data;
  }

  bool isEmpty() {
    return head == NULL;
  }

};

// template <class T>
// class Stack {
//   list<T> ll;

// public:
//   void push(T val) {
//     ll.push_front(val);
//   }

//   void pop() {
//     if(isEmpty()) {
//       cout << "Stack is Empty\n";
//       return;
//     }
//     ll.pop_front();
//   }

//   T top() {
//     return ll.front();
//   }

//   bool isEmpty() {
//     return ll.size() == 0;
//   }
// };

int main() {
  Stack<int> s;

  s.push(10);
  s.push(20);
  s.push(30);

  while(!s.isEmpty()) {
    cout << s.top() <<" ";
    s.pop();
  }

  // cout << s.top() ;
  // cout << endl;
  return 0;
}