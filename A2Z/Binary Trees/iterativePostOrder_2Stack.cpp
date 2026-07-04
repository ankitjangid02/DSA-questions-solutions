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

void iterativePostOrder(Node* root){
    if(root==nullptr) return;
    stack<Node*> s1, s2;
    s1.push(root);
    
    while(!s1.empty()){
        root=s1.top();
        s1.pop();
        s2.push(root);
        if(root->left!=nullptr) s1.push(root->left);
        if(root->right!=nullptr) s1.push(root->right);
    }
    while(!s2.empty()){
        cout<<s2.top()->data<<" ";
        s2.pop();
    }
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    iterativePostOrder(root);
    
    return 0;
}