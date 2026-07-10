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

Node* searchBST(Node* root, int val){
    while(root!=NULL && root->data!=val){
        root=val < root->data ? root->left : root->right;
    }
    return root;
}


int main() {
    Node* root=new Node(8);
    root->left=new Node(4);
    root->right=new Node(10);
    root->left->left=new Node(2);
    root->left->right=new Node(5);
    root->right->right=new Node(11);

    cout<<searchBST(root,11)->data;

    return 0;
}