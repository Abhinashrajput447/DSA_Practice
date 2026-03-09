#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);

  vector<int> v;

  while(!q.empty()) {
    v.push_back(q.front());
    q.pop();
  }

  for(int i=0; i<v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  return 0;
}