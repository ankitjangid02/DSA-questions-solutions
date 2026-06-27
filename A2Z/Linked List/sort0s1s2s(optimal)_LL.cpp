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

// sorting 0s 1s 2s in LL
Node* sort0s1s2s(Node* head){
    if(!head || !head->next) return head;
    
    Node* temp=head;
    
    Node* dummyNode0=new Node(-1);
    Node* zero=dummyNode0;

    Node* dummyNode1=new Node(-1);
    Node* one=dummyNode1;

    Node* dummyNode2=new Node(-1);
    Node* two=dummyNode2;

    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;
        }
        else if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        else{
            two->next=temp;
            two=temp;
        }
        temp=temp->next;
    }
    
    zero->next=(dummyNode1->next) ? dummyNode1->next : dummyNode2->next;
    one->next=dummyNode2->next;
    two->next=NULL;
    
    Node* newHead=dummyNode0->next;
    
    delete dummyNode0;
    delete dummyNode1;
    delete dummyNode2;
    
    return newHead;
}

int main() {
    vector<int> arr={0,1,1,0,2,2,1,0,0};

    Node* head=convertArr2LL(arr);
    print(head);
    head=sort0s1s2s(head);
    print(head);

    return 0;
}   