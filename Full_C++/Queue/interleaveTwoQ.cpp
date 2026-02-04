#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void interLeaveTwoQ(queue<int>& orgQ) {
  int n = orgQ.size()/2;
  queue<int> dupQ; // Duplicate Queue

  for(int i=0; i<n; i++) {
    dupQ.push(orgQ.front());
    orgQ.pop();
  }

  while(!dupQ.empty()) {
    orgQ.push(dupQ.front());
    dupQ.pop();

    orgQ.push(orgQ.front());
    orgQ.pop();
  }
}


void reverseQueue(queue<int>& q) {
  stack<int> st;

  while(!q.empty()) {
    st.push(q.front());
    q.pop();
  }

  while(!st.empty()) {
    q.push(st.top());
    st.pop();
  }
}

int main() {
  queue<int> orgQ;
  for(int i=1; i<=10; i++) {
    orgQ.push(i);
  }
  cout << "\n";

  reverseQueue(orgQ);
  // interLeaveTwoQ(orgQ);

  for(int i=1; i<=10; i++) {
    cout << orgQ.front() << " ";
    orgQ.pop();
  }
  cout << "\n";
  return 0;
}