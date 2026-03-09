#include <iostream>
#include <vector>
using namespace std;

template<class T>
class Stack {
  vector<T> v;
public:
  
  void push(T val) {
    v.push_back(val);
  }

  void pop() {
    if(isEmpty()) {
      cout << "Stack is Empty \n";
      return;
    }
    v.pop_back();
  }

  T top() {
    int lastIdx = v.size()-1;
    return v[lastIdx];
  }

  bool isEmpty() {
    return v.size() == 0;
  }

};

int main() {
  Stack<string> s;
  s.push("abhinash");
  s.push("bittu");
  s.push("cute");

  while(!s.isEmpty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}