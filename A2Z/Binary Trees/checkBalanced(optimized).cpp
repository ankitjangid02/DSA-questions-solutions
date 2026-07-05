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

int height(Node* root){
    if(root==nullptr) return 0;
    
    int l=height(root->left);
    if(l==-1) return -1;
    
    int r=height(root->right);
    if(r==-1) return -1;
    
    if(abs(l-r)>1) return -1;
    
    return 1+max(l,r);
}

bool isBalanced(Node* root){
    return height(root)!=-1;
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);

    cout<<isBalanced(root);
    
    return 0;
}