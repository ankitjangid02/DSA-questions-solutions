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

// reverse
Node* reverse(Node* head){
    Node* prev=nullptr;
    Node* curr=head;
    while(curr!=NULL){
        Node* front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}

int main() {
    vector<int> arr={1,2,3,4,5,6};
    Node* head=convertArr2LL(arr);
    print(head);
    head=reverse(head);
    print(head);

    return 0;
}   