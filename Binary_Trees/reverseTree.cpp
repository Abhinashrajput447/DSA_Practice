#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

int idx = -1;
Node* buildTree(vector<int>& preorder) {
  idx++;
  if(preorder[idx] == -1) return NULL;

  Node* root = new Node(preorder[idx]);

  cout << root -> data << " ";
  root -> left = preorder()
}

int main() {

  return 0;
}
