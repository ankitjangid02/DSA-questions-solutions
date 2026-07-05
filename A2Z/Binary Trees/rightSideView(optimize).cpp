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

void rightSideView(Node* root, int level, vector<int>& arr){
    if(root==nullptr) return;
    
    if(level==arr.size()) arr.push_back(root->data);
    
    rightSideView(root->right,level+1,arr);
    rightSideView(root->left,level+1,arr);
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    vector<int> arr;
    rightSideView(root,0,arr);
    
    for(int x:arr) cout<<x<<" ";

    
    return 0;
}