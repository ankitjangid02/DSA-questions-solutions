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

void iterativePreOrder(Node* root){
    vector<int> preOrder;
    if(root==nullptr) return;
    
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        root=s.top();
        s.pop();
        preOrder.push_back(root->data);
        if(root->right!=nullptr) s.push(root->right);
        if(root->left!=nullptr) s.push(root->left);
    }

    for(int i:preOrder) cout<<i<<" ";
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    iterativePreOrder(root);
    
    return 0;
}