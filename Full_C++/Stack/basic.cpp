#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// class Stack {
//     vector<int> v;
// public:
//     void push(int val) {
//         v.push_back(val);
//     }

//     void pop() {
//         if(isEmpty()) {
//             cout << "stack is empty \n";
//             return;
//         }
//         v.pop_back();
//     }
//     int top() {
//         if(isEmpty()) {
//             cout << "stack is empty \n";
//             return -1;
//         }
//         return v[v.size()-1];
//     }

//     // condition check stack is empty or not

//     bool isEmpty() {
//         return v.size() == 0;
//     }
// };

// class Stack1 {
//     int arr[10];
// public:
//     void push(int val) {
        
//     }

// };

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
