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

// add 2 numbers from LL
Node* addTwoNumbers(Node* head1, Node* head2) {
    Node* t1=head1;
    Node* t2=head2;
    
    Node* dummyNode= new Node(-1);
    Node* curr=dummyNode;
    
    int carry=0;
    
    while(t1!=NULL || t2!=NULL){
        int sum=carry;
        if(t1) sum+=t1->data;
        if(t2) sum+=t2->data;
        Node* newNode = new Node(sum%10);
        carry=sum/10;
        
        curr->next=newNode;
        curr=curr->next;
        
        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
    }
    if(carry){
        Node* newNode=new Node(carry);
        curr->next=newNode;
    }
    
    return dummyNode->next;
}

int main() {
    vector<int> arr={3,8,7};
    vector<int> arr2={5,2,4,1};
    
    Node* head1=convertArr2LL(arr);
    print(head1);
    Node* head2=convertArr2LL(arr2);
    print(head2);
    Node* newHead=addTwoNumbers(head1, head2);
    print(newHead);
    

    return 0;
}   