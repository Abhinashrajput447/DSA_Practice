#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void pushAtBottom(stack<int>& s, int val) {
  if(s.empty()) {
    s.push(val);
    return;
  }

  int temp = s.top();
  s.pop();

  pushAtBottom(s, val);
  s.push(temp);
}

void reverseStack(stack<int>& s) {
  if(s.empty()) {
    return;
  }

  int temp = s.top();
  s.pop();
  reverseStack(s);

  pushAtBottom(s, temp);
}

void reverseStack2(stack<char>& s) {
  stack<char> ans;

  while(!s.empty()) {
    ans.push(s.top());
    s.pop();
  }

  while(!ans.empty()) {
    cout << ans.top() << " ";
    ans.pop();
  }
}


int main() {
  stack<char> s;
  s.push('a');
  s.push('b');
  s.push('c');

  // while(!s.empty()) {
  //   cout << s.top() << " ";
  //   s.pop();
  // }
  // cout << endl;

  reverseStack2(s);
  // while(!s.empty()) {
  //   cout << s.top() << " ";
  //   s.pop();
  // }
  return 0;
}