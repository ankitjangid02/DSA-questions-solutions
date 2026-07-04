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

int maxDepth(Node* root){
    if(root==nullptr) return 0;
    
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    
    return 1+max(l,r);
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    // root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->right=new Node(6);
    root->left->right->right->right=new Node(7);
    
    cout<<maxDepth(root);
    
    return 0;
}