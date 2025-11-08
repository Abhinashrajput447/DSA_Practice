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
private:
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
            return;
        }else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void insert(int val , int pos) {
        if(pos < 0) {
            cout << "invalid position \n";
            return;
        }
        if(pos == 0) {
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i=0; i<pos-1; i++) {
            if(temp == NULL) {
                cout << "Invalid position\n";
                return;
            }
            temp = temp -> next;
        }
        Node* newNode = new Node(val);
        newNode-> next = temp -> next;
        temp-> next = newNode;
    }

    bool search(int key) {
        Node* temp = head;

        while(temp != NULL) {
            if(temp->data == key) return true;
            temp = temp-> next;
        }
        return false;
    }

    int search2(int key) {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp-> data == key) {
                return idx;
            }
            temp = temp-> next;
            idx++;
        }
        return -1;
    }

    void printLL() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL"<< endl;
    }
};
int main() {
    List ll;
    ll.push_front(4);
    ll.push_front(7);
    ll.push_front(6);

    ll.insert(19,2);
    ll.printLL();
    cout << ll.search2(14) << endl;

    int key = 4;
    if(ll.search(key)) {
        cout << key << " found in ll" << endl;
    }else{
        cout << key << " not found in ll" << endl;
    }
    return 0;
}