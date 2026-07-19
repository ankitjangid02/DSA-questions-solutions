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


int ans=INT_MAX;
Node* prevNode=NULL;

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
    
    if(prevNode!=NULL){
        ans=min(ans, root->data-prevNode->data);
    }
    
    prevNode=root;
    
    inOrder(root->right);

}

int getMinimumDifference(Node* root) {
    inOrder(root);
    return ans;
}

int main() {
    Node* root=NULL;
    root=insertIntoBST(root,4);
    root=insertIntoBST(root,2);
    root=insertIntoBST(root,6);
    root=insertIntoBST(root,1);
    root=insertIntoBST(root,3);

    cout<<getMinimumDifference(root);

    return 0;
}