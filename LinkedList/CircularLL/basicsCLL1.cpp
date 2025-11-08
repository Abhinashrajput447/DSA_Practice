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

class CirculorLL {
    Node* head;
    Node* tail;

public:
    CirculorLL() {
        head = tail = NULL;
    }

    void InsertAtTail(int val) {
        Node* newNode = new Node(val);

        if(tail == NULL) {
            head = tail = newNode;
            tail -> next = head;
        }else{
            newNode -> next = head;
            tail -> next =  newNode;
            tail = newNode;
        }
    }

    void print() {
        if(head == NULL) return;

        cout << head->data << " -> ";
        Node* temp = head -> next;

        while(temp != head) {  
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }

        cout << head -> data << endl;
    }
};
int main() {    
    CirculorLL cll;
    cll.InsertAtTail(1);
    cll.InsertAtTail(2);
    cll.InsertAtTail(3);

    cll.print();
    return 0;
}