#include <iostream>
#include <list>
using namespace std;

class Stack {
    list<int>ll;

public:
    void push(int val) {  // O(1)
        ll.push_front(val);
    }

    void pop() {  // O(1)
        ll.pop_front();
    }

    int top() {   // O(1)
        return ll.front();
    }

    bool empty() {   // O(1)
        return ll.size() == 0;
    }
};


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}