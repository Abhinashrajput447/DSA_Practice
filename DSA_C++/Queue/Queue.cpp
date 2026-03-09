#include <iostream>
#include <queue>
using namespace std;

void display(queue<int>& q) {
  while(!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
}
int main() {
  queue <int> q;
  q.push(10);
  q.push(20);
  q.push(30);

  // // display(q);
  // // cout << q.front();
  // cout << q.size();
  // display(q);
  return 0;
}