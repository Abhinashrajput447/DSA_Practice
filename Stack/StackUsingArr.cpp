#include<iostream>
using namespace std;

class Stack {
    int arr[5];
    int topIdx;

public:
    Stack() {
        topIdx = -1;
    }

    void push(int val) {
        if(topIdx == 4) {
            cout << "Stack Overflow \n";
            return;
        }
        topIdx++;
        arr[topIdx] = val;
    }

    void pop() {
        if(topIdx == -1) {
            cout << "Stack underflow\n";
            return;
        }
        topIdx--;
    }

    int top() {
        // if(topIdx == -1) {
        //     cout << "Stack is empty \n";
        //     return -1;
        // }
        return arr[topIdx];
    }

    bool empty() {
        return topIdx == -1;
    }
};
int main() {
    Stack s;

    s.push(34);
    s.push(12);
    s.push(14);
    // s.pop();
    cout << s.top();

    // while(!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // cout << endl;
    return 0;
}