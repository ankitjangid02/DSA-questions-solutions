#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};

// helper function to check if the left and right subtrees are symmetric
bool isSymmetricHelp(Node* left, Node* right){
    if(left==NULL || right==NULL) return left==right;
    
    if(left->data!=right->data) return false;
    
    return isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left);
}

// main function to check if the tree is symmetric or not
bool isSymmetric(Node* root){
    return root==NULL || isSymmetricHelp(root->left, root->right);
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(3);
    root->right=new Node(3);
    root->right->right=new Node(4);
    root->left->left=new Node(4);

    cout<<isSymmetric(root);

    return 0;
}