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
    
    // Node* temp=new Node(val);
    // Node* tail=head;
    // while(tail->next!=NULL){
    //     tail=tail->next;
    // }
    // tail->next=temp;
    // return head;
    
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
    return head;
}

//insert at k postion
Node* insertK(Node* head, int el, int k){
    if(head==NULL){
        if(k==1) return new Node(el);  
        else return head;
    } 
    if(k==1) return new Node(el, head);
    
    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        if(cnt==k-1){
            Node* x=new Node(el);
            x->next=temp->next;
            temp->next=x;
            return head;
        }
        temp=temp->next;
    }
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
    head=insertK(head, 0, 6);
    print(head);

    return 0;
}   