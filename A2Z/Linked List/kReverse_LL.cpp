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

// reverse till every K Node
// // reverse Linked List
Node* reverseLinkedList(Node* head){
    Node* temp=head;
    Node* prev=NULL;
    while(temp){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}

// // get kth node
Node* getKthNode(Node* temp, int k){
    k-=1;
    while(k>0 && temp!=NULL){
        k--;
        temp=temp->next;
    }
    return temp;
}

// // reverse till k node 
Node* kReverse(Node* head, int k){
    Node* temp=head;
    Node* prevNode=NULL;
    
    while(temp){
        Node* kthNode=getKthNode(temp,k);
        
        if(kthNode==NULL){
            if(prevNode) prevNode->next=temp;
            break;
        }
        
        Node* nextNode=kthNode->next;
        kthNode->next=NULL;
        reverseLinkedList(temp);
        
        if(temp==head) head=kthNode;
        else{
            prevNode->next=kthNode;
        }
        
        prevNode=temp;
        temp=nextNode;
    }
    return head;
}

int main() {
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};

    Node* head=convertArr2LL(arr);
    print(head);
    head=kReverse(head,3);
    print(head);

    return 0;
}   