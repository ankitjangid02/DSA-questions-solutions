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

bool check(Node* root){
    if(root==nullptr) return true;
    
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    
    if(abs(l-r)>1) return false;
    
    bool left=check(root->left);
    bool right=check(root->right);
    
    if(!left || !right) return false;
    
    return true;
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    
    cout<<check(root);
    
    return 0;
}