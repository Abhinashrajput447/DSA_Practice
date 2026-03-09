#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;


    //paramitirized constructor
    Node(int val) {
        this->data=val;
        left=right=NULL;
    }
};

Node* insert(Node* root, int val) {
    if(root == NULL) {
        Node* root = new Node(val);
        return root;
    }

    if(root->data > val) {
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }

    return root;
}


Node*   buildTree(vector<int>& node) {
    Node* root = NULL;

    for(int i=0; i<node.size(); i++) {
        root = insert(root, node[i]);
    }

    return root;
}


void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//search in BST
bool searchInBST(Node* root, int val) {
    if(root == NULL) {
        return false;
    }

    if(root->data > val) {
        return searchInBST(root->left, val);
    }else if(root->data < val) {
        return searchInBST(root->right, val);
    }else{
        return true;
    }

    return false;
}

int main() {
    vector<int> node = {5, 4, 2, 3, 9, 7, 8};

    Node* root = buildTree(node);

    // cout << root -> data;
    // cout << endl;
    inorder(root);
    cout << endl;
    
    cout << searchInBST(root, 7) << endl;
    return 0;
}