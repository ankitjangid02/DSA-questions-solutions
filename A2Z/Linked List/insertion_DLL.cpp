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
        Node* temp=new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    Node* tail=head;
    while(tail){
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    cout<<endl;
}

// insert head
Node* insertHead(Node* head, int val){
    Node*temp=new Node(val, head, nullptr);
    head->back=temp;
    head=temp;
    return head;
}

// insert tail
Node* insertTail(Node* head, int val){
    Node* tail=head;
    while(tail->next!=NULL) tail=tail->next;
    Node* temp=new Node(val, nullptr, tail);
    tail->next=temp;
    return head;
}

int main() {
    vector<int> arr={12,5,8,7};
    Node* head = convertArr2DLL(arr);
    print(head);
    head=insertHead(head,10);
    print(head);
    head=insertTail(head,15);
    print(head);
    
    return 0;
}