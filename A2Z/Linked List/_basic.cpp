#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover =head;
    for(int i=1; i<arr.size(); i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    Node* temp=head;
    int n=0;
    while(temp){
        temp=temp->next;
        n++;
    }
    return n;
}

bool checkIfPresent(Node* head, int val){
    Node* temp=head;
    int index=-1;
    while(temp){
        index++;
        if(temp->data==val) return true;
        temp=temp->next;
    }
    return false;
}

int main() {
    vector<int> arr={12,5,8,7};
    // Node y=Node(arr[0], nullptr);
    // cout<<y.data;
    // cout<<y.next;
    // Node* x=new Node(arr[0], nullptr);
    // cout<<x->data;
    
    Node* head=convertArr2LL(arr);
    // cout<<head->data;
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
    cout<<lengthOfLL(head)<<endl;
    
    cout<<checkIfPresent(head,8);
    return 0;
}