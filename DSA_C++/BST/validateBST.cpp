#include <iostream>
#include <vector>
#include <limits>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    // paramitirized constructor
    TreeNode(int val) {
        this->data = val;
        left = right = NULL;
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
    TreeNode* root = NULL;

    for(int i=0; i<node.size(); i++) {
        root = insert(root, node[i]);
    }
    return root;
}

//inorder traversal
void inorder(TreeNode* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root -> data << " ";
    inorder(root->right);
}

//using node & NULL pointer
bool validateHelper(TreeNode* root, TreeNode* min, TreeNode* max) {
    if(root == NULL) return true;

    if(min != NULL && root->data < min->data) {
        return false;
    }

    if(max != NULL && root->data > max->data) {
        return false;
    }

    return validateHelper(root->left, min, root) 
           && validateHelper(root->right, root, max);
}

//using long min and max value
int validateHelper2(TreeNode* root, int &min, int &max) {
    if(root == NULL) return -1;

    if(!(root->data > min && root->data < max)) {
        return -1;
    }

    int leftSubTreeMax = validateHelper2(root->left, min, root->data);
    int rightSubTreeMin = validateHelper2(root->right, root->data, max);

    return leftSubTreeMax && rightSubTreeMin;
    // return  validateHelper2(root->left, min, root->data)
    //         &&validateHelper2(root->right, root->data, max);
}

//Checking A BST is valid or not
int isValidateBST(TreeNode* root) {    
    // return validateHelper(root, NULL, NULL);
    int min = -100000, max = 100000;
    // return validateHelper2(root, -100000, 100000);
    validateHelper2(root, min, max);
    return max;
}




int main() {
    vector<int> node2 = {8, 5, 3, 4, 6, 10, 9, 12};

    TreeNode* root = buildTree(node2);

    // inorder(root);
    inorder(root);
    // root->data = 11;
    cout << endl;
    cout << isValidateBST(root);
    cout << endl;
    return 0;
}