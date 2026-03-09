#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    //paramitirized constructor
    Node(int val) {
        this->data = val;
        left=right=NULL;
    }
};

//root1 => BST1
void inorderBST1(Node* root1, vector<int>& node1) {
    if(root1 == NULL) {
        return;
    }

    inorderBST1(root1->left, node1);
    node1.push_back(root1->data);
    inorderBST1(root1->right, node1);
}

void inorderBST2(Node* root2, vector<int>& node2) {
    if(root2 == NULL) {
        return;
    }

    inorderBST1(root2->left, node2);
    node2.push_back(root2->data);
    inorderBST1(root2->right, node2);
}

void mergeTwoNodes(vector<int>& node1, vector<int>& node2, vector<int>& mergedNodes) {
    // int st = node1.size()-1, end = node2.size()-1;

    // while()
    for(int i=0; i<node1.size(); i++) {
        mergedNodes.push_back(node1[i]);
    }   

    for(int i=0; i<node2.size(); i++) {
        mergedNodes.push_back(node2[i]);
    }   

    sort(mergedNodes.begin(), mergedNodes.end());
}

//balanced BST
Node* balBST(vector<int>& mergedNodes, int st, int end) {
    // int st = 0, end = mergedNodes.size()-1;
    if(st > end) {
        return NULL;
    }

    int mid = st+(end-st)/2;
    Node* curr = new Node(mergedNodes[mid]);

    curr->left = balBST(mergedNodes, st, mid-1);
    curr->right = balBST(mergedNodes, mid+1, end);

    return curr;
}

//root1 => BST1 && root2 => BST2
Node* mergeTwoBST(Node* root1, Node* root2) {
    vector<int> node1, node2, mergedNodes;
    inorderBST1(root1, node1);
    inorderBST2(root2, node2);

    mergeTwoNodes(node1, node2, mergedNodes);

    Node* root = balBST(mergedNodes, 0, mergedNodes.size()-1);
    return root;
}

void preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root -> data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
}
int main() {
    Node* root1 = new Node(30);
    root1->left = new Node(20);
    root1->left->left = new Node(5);
    root1->left->right = new Node(25);

    Node* root2 = new Node(50);
    root2->left = new Node(55);
    root2->left->left = new Node(60);
    root2->left->right = new Node(65);

    Node* root = mergeTwoBST(root1, root2);
    preorder(root);
    // inorder(root);
    cout << endl;

    return 0;
}