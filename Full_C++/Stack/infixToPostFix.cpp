#include <iostream>
#include <stack>
using namespace std;

int precedence(char ch) {
  if (ch == '^') return 3;
  if (ch == '*' || ch == '/') return 2;
  if (ch == '+' || ch == '-') return 1;
  return -1;
}

string infixToPostfix(string s) {
  stack<char> st;
  string result = "";

  for (char ch : s) {

    // If operand
    if (isalnum(ch)) {
      result += ch;
    }

    // If '('
    else if (ch == '(') {
      st.push(ch);
    }

    // If ')'
    else if (ch == ')') {
      while (!st.empty() && st.top() != '(') {
        result += st.top();
        st.pop();
      }
      st.pop(); // remove '('
    }

    // If operator
    else {
      while (!st.empty() &&
        precedence(st.top()) >= precedence(ch)) {
        result += st.top();
        st.pop();
      }
      st.push(ch);
    }
  }

  while (!st.empty()) {
    result += st.top();
    st.pop();
  }

  return result;
}

int main() {
  string s = "(a+b*c)";
  cout << infixToPostfix(s);
}