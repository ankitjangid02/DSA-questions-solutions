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

Node* rotateRight(Node* head, int k) {
    if(head==NULL || head->next==NULL || k==0) return head;

    int len=1;
    Node* tail=head;
    while(tail->next){
        len++;
        tail=tail->next;
    }

    k%=len;

    if(k==0) return head;

    tail->next=head;
    int steps=len-k-1;
    Node* newTail=head;
    while(steps--){
        newTail=newTail->next;
    }       
    Node* newHead = newTail->next;
    newTail->next=NULL;
    return newHead; 
}

int main() {
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArr2LL(arr);
    print(head);
    head=rotateRight(head,2);
    print(head);
    return 0;
}