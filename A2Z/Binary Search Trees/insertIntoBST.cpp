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

Node* insertIntoBST(Node* root, int val){
    
    if(root==NULL) return new Node(val);
    
    Node* curr=root;
    while(true){
        if(curr->data<=val){
            if(curr->right!=NULL) curr=curr->right;
            else{
                curr->right=new Node(val);
                break;
            }
        }
        else{
            if(curr->left!=NULL) curr=curr->left;
            else{
                curr->left=new Node(val);
                break;
            }
        }
    }
    return root;
}

void inOrder(Node* root){
    if(root==nullptr) return;
    
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}

int main() {
    Node* root=NULL;
    root=insertIntoBST(root,8);
    root=insertIntoBST(root,1);
    root=insertIntoBST(root,11);
    root=insertIntoBST(root,16);
    root=insertIntoBST(root,5);
    
    inOrder(root);
    
    return 0;
}