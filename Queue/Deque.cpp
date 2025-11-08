#include<iostream>
#include<deque>
#include<queue>
using namespace std;

int main() {
  deque<int> dq = {1,2,3,4,5};

  // dq.push_back(1);
  // dq.push_back(2);
  // dq.push_back(3);
  // dq.push_front(6);

  // cout << dq.front() << " " << dq.back() << endl;

  while(!dq.empty()) {
    cout << dq.back() << " ";
    dq.pop_back();
  }
  cout << endl;
 return 0; 
}