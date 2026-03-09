#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    //paramitirized constructor
    Node(int val) {
        this->data = val;
        left = right = NULL;
    }
};


void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
}

class Info {
public:
    bool isBST;
    int mn;
    int mx;
    int sz;

    //Paramitirized constructor
    Info(bool isBST, int mn, int mx, int sz) {
        this->isBST = isBST;
        this->mn = mn;
        this->mx = mx;
        this->sz = sz;
    }
};

static int maxSize;

Info* largestBST(Node* root) {
    //Base Case1
    // if(root == NULL) {
    //     return new Info(true, INT_MAX, INT_MIN, 0);
    // }

    // Base Case2
    if(root == NULL) {
        return NULL;
    }

    if((!root->left) && (!root->right)){
        return new Info(true, root->data, root->data, 1);
    }

    Info* leftInfo = largestBST(root->left);
    Info* rightInfo = largestBST(root->right);

    int currMin = min(root->data, min(leftInfo->mn, rightInfo->mn));

    int currMax = max(root->data, max(leftInfo->mx, rightInfo->mx));

    int currSize = leftInfo->sz+rightInfo->sz+1;

    if(leftInfo->isBST && rightInfo->isBST
        && root->data > leftInfo->mx
        && root->data < rightInfo->mn) {
            maxSize = max(maxSize, currSize);

            return new Info(true, currMin, currMax, currSize);
    }
    return new Info(false, currMin, currMax, currSize);
}

int main() {
    Node* root = new Node(50);

    root->left = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(20);

    root->right = new Node(60);
    root->right->left = new Node(45);
    root->right->right = new Node(70);
    root->right->right->left = new Node(65);
    root->right->right->right = new Node(80);

    largestBST(root);
    cout << "Max Size : " << maxSize << endl;
    return 0;
}