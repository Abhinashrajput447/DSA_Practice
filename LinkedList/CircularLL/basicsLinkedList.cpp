#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;
    Node* next;

    // List(int val)

    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val); // dynamic 
        if(head == NULL) {
            head = tail = newNode;
            return;
        }else {
            newNode-> next = head;
            head = newNode;
        }
    }
    void print() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout <<"NULL" <<endl;
    }
};


List* splitAtMiddle(List* head) {
    List* prev = NULL;
    List* slow = head;
    List* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        
    }
}

int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.print();
    return 0;
}