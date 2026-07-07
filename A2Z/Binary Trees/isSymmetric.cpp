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

bool isSymmetricHelp(Node* left, Node* right){
    if(left==NULL && right==NULL) return true;
    if(left==NULL || right==NULL) return false;
    
    if(left->data!=right->data) return false;
    
    return isSymmetricHelp(left->left, right->right) && isSymmetricHelp(left->right, right->left);
}

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