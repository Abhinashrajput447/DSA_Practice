#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    //Paramitirized constructor
    TreeNode(int val) {
        this->data=val;
        left=right=NULL;
    }
};

//Insert The Node
TreeNode* insert(TreeNode* root, int val) {
    if(root == NULL) {
        root = new TreeNode(val);
        return root;
    }

    if(val < root->data) {
        root->left = insert(root->left, val);
    }else{
        root->right = insert(root->right, val);
    }
    return root;
}

TreeNode* buildTree(vector<int>& node) {
    int n = node.size();
    TreeNode* root = NULL;

    for(int i=0; i<n; i++) {
        root = insert(root, node[i]);
    }
    return root;
}

//Print Fnx for printing the Root to leaf path
void print(vector<int>& path) {
    for(int x : path) {
        cout << x << " ";
    }path.pop_back();
    cout << endl;
}

//Helper fnx creation for root to 
void pathHelper(TreeNode* root, vector<int>& path) {
    if(root == NULL) return;
    path.push_back(root->data);

    if(!root->left && !root->right) {
        print(path);
        path.pop_back();
    }

    pathHelper(root->left, path);
    pathHelper(root->right, path);
}

// Print the all Nodes from root to leaf Path
void rootToLeafPath(TreeNode* root){
    vector<int> path;
    pathHelper(root, path);
}

void inorder(TreeNode* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
}

int main() {
    vector<int> node = {4, 2, 3, 5, 16};
    vector<int> node2 = {8, 5, 2, 1, 4, 6, 10, 11,14};

    TreeNode* root = buildTree(node2);

    // inorder(root);
    rootToLeafPath(root);
    cout << endl;
    return 0;
}