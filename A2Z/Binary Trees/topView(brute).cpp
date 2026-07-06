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

void topView(Node* root){
    if(root==nullptr) return;
    vector<int> ans;
    Node* root1=root;
    Node* root2=root;
    while(root1->left!=NULL){
        root1=root1->left;
        ans.push_back(root1->data);
    }
    reverse(ans.begin(), ans.end());
    ans.push_back(root->data);
    while(root2->right!=NULL){
        root2=root2->right;
        ans.push_back(root2->data);
    }
    
    for(int i:ans) cout<<i<<" ";
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    
    topView(root);

    
    return 0;
}