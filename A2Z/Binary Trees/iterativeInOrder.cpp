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

void iterativeInOrder(Node* root){
    stack<Node*> s;
    Node* node=root;
    vector<int> inOrder;
    if(root==nullptr) return;
    
    while(true){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }
        else{
            if(s.empty()==true) break;
            node=s.top();
            s.pop();
            inOrder.push_back(node->data);
            node=node->right;
        }
    }
    for(int i:inOrder) cout<<i<<" ";
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    iterativeInOrder(root);
    
    return 0;
}