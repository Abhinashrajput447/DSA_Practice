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

    void pop_back() {
        if(head == NULL) {
            cout << "LL is empty \n";
            return;
        }
        Node* temp = head;
        while(temp->next != tail) {
            temp = temp->next;
        }
        temp-> next = NULL;
        delete tail;
        tail = temp;
    }

    void printLL() {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->data << "-> ";
            temp = temp-> next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    List ll;
    ll.pop_back();
    ll.printLL();
    return 0;
}