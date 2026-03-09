#include<iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);

  stack<int> s;

  while (!q.empty()){
    s.push(q.front());
    q.pop();
  }

  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  
  return 0;
}