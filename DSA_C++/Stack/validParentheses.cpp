#include <iostream>
#include <string>
#include <stack>
#include <deque>
using namespace std;

bool validParan(string& str) {
  stack<char> s;

  for(int i=0; i<str.size(); i++) {
    char ch = str[i];
    if(ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    }else{
      if(s.empty()) {
        return false;
      }

      char top = s.top();
      if((top == '('  && ch == ')') || 
          (top == '{'  && ch == '}') || 
          (top == '['  && ch == ']')) {

            s.pop();
      }else{
        return false;
      }
    }
  }
  return s.empty();
}

bool duplicateParan(string str) {
  stack<char> s;

  for(int i=0; i<str.size(); i++) {
    char ch = str[i];

    if(ch != ')') {
      s.push(ch);

    }else{
      if(s.top() == '(') {
        return true;
      }

      while(s.top() != '(') {
        s.pop();
      }
      s.pop();
    }
  }
  return false;
}


// Using Deque
bool validParan2(string s) {
  deque<char> dq;
  
  for(int i=0; i<s.size(); i++) {
    char ch = s[i];

    if(ch == '(' || ch == '{' || ch == '[') {
      dq.push_back(ch);
    }else{
      if(dq.empty()) {
        return false;
      }

      char top = dq.back();

      if((top=='(' && ch==')') ||
        (top=='{' && ch=='}') ||
        (top=='[' && ch==']')) {
          dq.pop_back();

      }else{
        return false;
      }
    }
  }

  return dq.empty();
}

int main() {
  string s1 = "((a+b))";
  string s2 = "(})";

  // Valid parentheses usign Deque
  // deque<char> dq;
  // dq.push_back('a');
  // dq.push_back('b');

  // cout << dq.back() << endl;
  // cout << validParan(s2) << endl;

  // cout << validParan2(s2) << endl;
  stack<char> stk;

  cout << stk.top() << endl;
  return 0;
}