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

vector<int> topView(Node* root){
    vector<int> ans;
    map<int,int> mpp;
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end()) mpp[line]=node->data;
        
        if(node->left!=NULL){
             q.push({node->left, line-1});
        }
        if(node->right!=NULL){
            q.push({node->right, line+1});
        }
    }
    for(auto it:mpp){
	ans.push_back(it.second);
    }

    return ans;
}

int main() {
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    
    vector<int> arr=topView(root);

    for(int i:arr) cout<<i<<" ";
    
    return 0;
}