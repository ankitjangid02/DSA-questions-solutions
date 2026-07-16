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

vector<double> levelOrder(Node* root){
    vector<double> arr;
    
    if(root==nullptr) return arr;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        int size=q.size();
        long long avg=0;
        
        for(int i=0; i<size; i++){
            Node* node=q.front();
            q.pop();
            
            avg+=node->data;
            
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
        }
        arr.push_back((double)avg/size);
    }
    return arr;
}

int main() {
    Node* root=new Node(3);
    root->left=new Node(9);
    root->right=new Node(20);
    root->right->right=new Node(7);
    root->right->left=new Node(15);
    
    vector<double> arr=levelOrder(root);
    for (double val : arr) {
        cout << val << " ";
    }
    
    return 0;
}