#include <iostream>
#include <vector>
using namespace std;

//Implemenation of BST 
//Class TreeNode creation
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    //Paramitirized Constructor
    TreeNode(int val) {
        this -> data = val;
        left = right = NULL;
    }
};


/*Built a BST(Binary Search Tree)
using Array*/
TreeNode* insert(TreeNode* root, int val) { //TC=> O(longN)
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


//Build Search Tree using arr
TreeNode* buildTree(int arr[], int n) {
    TreeNode* root = NULL;

    for(int i=0; i<n; i++) {
        root = insert(root, arr[i]);
    }

    return root;
}


//Build Tree Using vector
TreeNode* buildTree2(vector<int>& node) {
    int n = node.size();
    TreeNode* root = NULL;
    for(int i=0; i<n; i++) {
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


//Search key in Binary Tree
bool search(TreeNode* root, int key) {  //O(Height), avg => O(longN)
    if(root == NULL) return false;  //Base Case

    if(root->data == key) {  //Found
        return true;
    }

    // if(root->data>key) { 
    //     return search(root->left, key);  //left subtree
    // }else{
    //     return search(root->right, key); //right dsubtree
    // }

    return root->data>key ? search(root->left, key) : search(root->right, key);
}

//Inorder Successor
TreeNode* getInorderSuccessor(TreeNode* root) {
    while(root->left != NULL) {
        root = root->left;
    }

    return root;
}

//Delete Node from BST
TreeNode* delNode(TreeNode* root, int val) {
    if(root == NULL) return NULL;

    if(root->data>val) { //Left Subtree
        root->left = delNode(root->left, val);
    }else if(root->data<val) {//Right Subtree
        root->right = delNode(root->right, val);
    }else{
        //root = val
        //Case1 : 0 Children

        if(!root->left && !root->right) {
            delete root;
            return NULL;
        }

        //Case2 : 1 Children
        if(!root->left || !root->right) {
            return root->left == NULL ? root->right : root->left;
        }

        //Case3 : 2 Children
        TreeNode* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data); //Case1, Case2
        return root;
    }
    return root;
}

//Print in Range
void printInRange(TreeNode* root, int start, int end) {   //Base Case
    if(root == NULL) {
        return;
    }

    
    if(start <= root->data && root->data<=end) { //Case1
        printInRange(root->left, start, end);// for sorted that why appling inorder traversal
        cout << root->data << " ";

        // printInRange(root->left, start, end);//Left Subtree  
        printInRange(root->right, start, end);//Right Subtree
    }else if(root->data<start) { //Case2
        printInRange(root->right, start, end);
    }else{ //Case3
        printInRange(root->left, start, end);
    }
}


int main() {
    vector<int> node = {4, 2, 3, 5, 16};
    int n = 6;
    int arr[n] = {5, 1, 3, 4, 2, 7};

    vector<int> node2 = {8, 5, 2, 1, 4, 6, 10, 11,14};
    // TreeNode* root = buildTree(node, idx);

    TreeNode* root = buildTree2(node2);

    inorder(root);
    cout << endl;
    printInRange(root, 5, 18);
    cout << endl;
    // cout << search(root, 4);
    // cout << endl;
    // delNode(root, 5);
    // cout << endl;
    // inorder(root);
    // cout << endl;
    return 0;
}