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

void inOrder(Node* root){
    if(root==nullptr) return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(5);
    root->left->left=new Node(4);
    
    inOrder(root);
    return 0;
}