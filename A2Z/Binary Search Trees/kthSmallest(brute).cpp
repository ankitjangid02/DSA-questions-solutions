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

void inOrder(Node* root, vector<int>& arr){
    if(root){
        inOrder(root->left,arr);
        arr.push_back(root->data);
        inOrder(root->right,arr);
    }
}

int kthSmallest(Node* root, int k){
    vector<int> values;
    inOrder(root, values);
    
    int kth_Smallest=values[k-1];
    
    return kth_Smallest;
}


int main() {
    Node* root=NULL;
    root=insertIntoBST(root,8);
    root=insertIntoBST(root,1);
    root=insertIntoBST(root,11);
    root=insertIntoBST(root,16);
    root=insertIntoBST(root,5);
    
    cout<<kthSmallest(root, 2);

    return 0;
}