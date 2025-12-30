#include <iostream>
#include <string>
#include <stack>
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

int main() {
  string s1 = "(())()";
  cout << validParan(s1);
  return 0;
}