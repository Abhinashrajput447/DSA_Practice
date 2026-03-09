#include <iostream>
#include <vector>
#include <string>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    //Paramitirized constructor
    TreeNode(int val) {
        this->data = val;
        left = right = NULL;
    }
};


//build BST from sorted array
TreeNode* buildBSTfromSorted(int arr[], int st, int end) {
    if(st > end) {
        return NULL;
    }

    int mid = st+(end-st)/2;
    TreeNode* curr = new TreeNode(arr[mid]);

    curr->left = buildBSTfromSorted(arr, st, mid-1);
    curr->right = buildBSTfromSorted(arr, mid+1, end);

    return curr;
}

void preorder(TreeNode* root) {
    if(root == NULL) return;

    cout << root -> data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main() {
    int arr[7] = {3, 4, 5, 6, 7, 8, 9}; 

    TreeNode* root = buildBSTfromSorted(arr, 0, 6);
    preorder(root);
    cout << endl;
    return 0;
}