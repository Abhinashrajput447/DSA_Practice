#include <iostream>
#include <stack>
using namespace std;

string postfixToInfix(string s) {
  stack<string> st;

  for (char ch : s) {
    // If operand
    if (isalnum(ch)) {
      st.push(string(1, ch));
    }

    // If operator
    else {
      string op2 = st.top(); st.pop();
      string op1 = st.top(); st.pop();

      string temp = "(" + op1 + ch + op2 + ")";
      st.push(temp);
    }
  }

  return st.top();
}

int main() {
  string postfix = "AB+C*";
  cout << postfixToInfix(postfix);
}