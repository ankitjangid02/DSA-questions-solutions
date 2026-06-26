#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  public:
  Node(int data1){
      data=data1;
      next=nullptr;
  }
  public:
  Node(int data1, Node* next1){
      data=data1;
      next=next1;
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
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// insert at head
Node* insertHead(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }
    // Node* temp=new Node(val,head);
    // return temp;
    return new Node(val,head);
}

//insert tail
Node* insertTail(Node* head, int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp=new Node(val);
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=temp;
    return head;
}

int main() {
    vector<int> arr={12,5,8,7,6,9,10};
    
    Node* head=convertArr2LL(arr);
    print(head);
    head=insertHead(head, 100);
    print(head);
    head=new Node(500, head);
    print(head);
    head=insertTail(head, 99);
    print(head);

    return 0;
}   