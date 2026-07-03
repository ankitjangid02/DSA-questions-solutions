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

void preOrder(Node* root){
    if(root==nullptr) return;
    
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    
    preOrder(root);
    return 0;
}