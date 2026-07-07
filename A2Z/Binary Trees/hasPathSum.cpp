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

// its the targetsum must match with the sum from root to all path
bool hasPathSum(Node* root, int targetSum) {
    if(root==NULL) return false;

    if(root->left==NULL && root->right==NULL) return targetSum==root->data;

    return hasPathSum(root->left, targetSum-root->data) || hasPathSum(root->right, targetSum-root->data);
}


int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    
    cout<<hasPathSum(root,3);

    
    return 0;
}