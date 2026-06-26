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

// remove head
Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

// remove tail
Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* tail=head;
    while(tail->next->next!=NULL) tail=tail->next;
    delete tail->next;
    tail->next=nullptr;
    return head;
}

// remove Kth element
Node* removeKthElement(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main() {
    vector<int> arr={12,5,8,7,6,9,10};
    
    Node* head=convertArr2LL(arr);
    print(head);
    head=removeHead(head);
    print(head);
    head=removeTail(head);
    print(head);
    head=removeKthElement(head,3);
    print(head);
    

    return 0;
}   