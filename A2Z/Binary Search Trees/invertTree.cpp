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

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root==nullptr) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<int> level;
        for(int i=0; i<size; i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

Node* invertTree(Node* root) {
    if(root==NULL) return NULL;
    
    swap(root->right, root->left);
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}

int main() {
    Node* root=NULL;
    root=insertIntoBST(root,4);
    root=insertIntoBST(root,2);
    root=insertIntoBST(root,1);
    root=insertIntoBST(root,3);
    root=insertIntoBST(root,7);
    root=insertIntoBST(root,6);
    root=insertIntoBST(root,9);
    
    root=invertTree(root);
    vector<vector<int>> arr=levelOrder(root);
    for (auto &level : arr) {
        for (int val : level) {
            cout << val << " ";
        }
    }
    
    return 0;
}