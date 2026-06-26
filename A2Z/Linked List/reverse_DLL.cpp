// Online C++ compiler to run C++ program online
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

Node* convertArr2DLL(vector<int>& arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1; i<arr.size(); i++){
        Node* curr=new Node(arr[i], nullptr, prev);
        prev->next=curr;
        prev=curr;
    }
    return head;
}

void print(Node* head){
    Node* curr=head;
    while(curr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

// reverse 
Node* reverseDLL(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* curr=head;
    Node* last=NULL;
    while(curr){
        last=curr->back;
        
        curr->back=curr->next;
        curr->next=last;
        
        curr=curr->back;
    }
    head=last->back;
    return head;
}



int main() {
    vector<int> arr={12,5,8,7};
    Node* head = convertArr2DLL(arr);
    print(head);
    head=reverseDLL(head);
    print(head);

    return 0;
}