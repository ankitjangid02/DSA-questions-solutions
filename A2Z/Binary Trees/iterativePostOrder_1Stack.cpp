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
    stack<Node*> s1;
    vector<int> post;
    Node* curr=root;

    while(curr!=NULL || !s1.empty()){
        if(curr!=NULL){
            s1.push(curr);
            curr=curr->left;
        }
        else{
            Node* temp=s1.top()->right;
            if(temp==NULL){
                temp=s1.top();
                s1.pop();
                post.push_back(temp->data);
                while(!s1.empty() && temp==s1.top()->right){
                    temp=s1.top();
                    s1.pop();
                    post.push_back(temp->data);
                }
            }
            else curr=temp;
        }
    }
    
    for(int i:post) cout<<i<<" ";
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    // root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->right=new Node(6);
    root->left->right->right->right=new Node(7);
    
    iterativePostOrder(root);
    
    return 0;
}