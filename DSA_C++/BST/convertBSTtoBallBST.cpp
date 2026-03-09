#include <iostream>
#include <vector>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        this -> data = val;
        left = right = NULL;
    }
};

//inoder traversal
void inorder(TreeNode* root) {
    if(root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(TreeNode* root) {
    if(root == NULL) {
        return;
    }

    cout << root -> data << " ";
    preorder(root->left);
    preorder(root->right);
}

void getInOrder(TreeNode* root, vector<int>& nodes) {
    if(root == NULL) {
        return;
    }

    getInOrder(root->left, nodes);
    nodes.push_back(root->data);
    getInOrder(root->right, nodes);
}

TreeNode* bltBSTFrmVec(vector<int>& nodes, int st, int end) {
    if(st > end) {
        return NULL;
    }
    int mid = st + (end-st)/2;

    TreeNode* curr = new TreeNode(nodes[mid]);

    curr->left = bltBSTFrmVec(nodes, st, mid-1);
    curr->right = bltBSTFrmVec(nodes, mid+1, end);

    return curr;
}

TreeNode* balanceBST(TreeNode* root) {
    vector<int> nodes;
    getInOrder(root, nodes);

    return bltBSTFrmVec(nodes, 0, nodes.size()-1);

    // return root;
}

int main() {
    TreeNode* root = new TreeNode(6);

    root->left = new TreeNode(5);
    root->left->left = new TreeNode(4);
    root->left->left->left = new TreeNode(3);

    root->right = new TreeNode(7);
    root->right->right = new TreeNode(8);
    root->right->right->right = new TreeNode(9);

    preorder(root);
    cout << endl;
    root = balanceBST(root);
    preorder(root);
    cout << endl;
    return 0;
}