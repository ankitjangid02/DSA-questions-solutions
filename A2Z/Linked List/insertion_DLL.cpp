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
    if(head==NULL) return new Node(val);
    Node* tail=head;
    while(tail->next!=NULL) tail=tail->next;
    Node* temp=new Node(val, nullptr, tail);
    tail->next=temp;
    return head;
}

// insert before k postion
Node* insertBeforeKthPosition(Node* head, int val, int k){
    if(k==1) return insertHead(head, val);
    if(head==NULL) return new Node(val);
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

// insert before node
void inserBeforeNode(Node* temp, int val){
    Node* prev=temp->back;
    
    Node* newNode=new Node(val, temp, prev);
    prev->next=newNode;
    temp->back=newNode;
}

int main() {
    vector<int> arr={12,5,8,7};
    Node* head = convertArr2DLL(arr);
    print(head);
    head=insertHead(head,10);
    print(head);
    head=insertTail(head,15);
    print(head);
    head=insertBeforeKthPosition(head, 20, 6);
    print(head);
    inserBeforeNode(head->next->next, 99);
    print(head);
    
    return 0;
}