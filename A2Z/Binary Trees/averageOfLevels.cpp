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

vector<vector<double>> levelOrder(Node* root){
    vector<vector<double>> ans;
    if(root==nullptr) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        vector<double> level;
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

vector<double> averageOfLevels(Node* root) {
    vector<vector<double>> arr=levelOrder(root);
    vector<double> average;
    for(int i=0; i<arr.size(); i++){
        double avg=0;
        for(int j=0; j<arr[i].size(); j++){
            avg+=arr[i][j];
        }
        avg=avg/arr[i].size();
        average.push_back(avg);
    }
    return average;
}

int main() {
    Node* root=new Node(3);
    root->left=new Node(9);
    root->right=new Node(20);
    root->right->right=new Node(7);
    root->right->left=new Node(15);
    
    vector<double> arr=averageOfLevels(root);
    for (double val : arr) {
        cout << val << " ";
    }
    
    return 0;
}