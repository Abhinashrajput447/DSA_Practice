#include <iostream>
#include <vector>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        this->data=val;
        next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    void insertBeg(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            head -> next = NULL;
        }else{
            head ->
        }
    }
};

int main() {
    return 0;
}