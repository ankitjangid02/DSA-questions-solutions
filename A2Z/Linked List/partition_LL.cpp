#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void print(Node* head){
    Node* temp=head;
    int k=10;
    while(temp && k!=0){
        k--;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* partition(Node* head, int x) {
    Node* dummyNodeS= new Node(-1);
    Node* dummyNodeB= new Node(-1);
    Node* curr=head;
    Node* s=dummyNodeS;
    Node* b=dummyNodeB;
    while(curr){
        if(curr->data<x){
            s->next=curr;
            s=curr;
            curr=curr->next;
        }
        else{
            b->next=curr;
            b=curr;
            curr=curr->next;
        }
    }
    b->next=nullptr;
    s->next=dummyNodeB->next;
    return dummyNodeS->next;
}

int main() {
    vector<int> arr={1,6,2,3,4,6,2,2,2,1,1};

    Node* head=convertArr2LL(arr);
    print(head);
    head=partition(head,3);
    print(head);
    
    return 0;
}   