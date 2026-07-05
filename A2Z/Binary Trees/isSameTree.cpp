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

bool isSameTree(Node* p, Node* q) {
    if(p==NULL && q==NULL) return true;
    if(p==NULL || q==NULL) return false;

    if(p->data!=q->data) return false;

    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
}

int main() {
    // Tree 1
    Node* p = new Node(1);
    p->left = new Node(2);
    p->right = new Node(3);

    // Tree 2
    Node* q = new Node(1);
    q->left = new Node(2);
    q->right = new Node(3);

    cout<<isSameTree(p, q);
    
    return 0;
}