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

// reverse in between
Node* reverseBetween(Node* head, int left, int right) {
    if(head==NULL || head->next==NULL || left==right) return head;
    
    Node* leftP = head;
    Node* rightP = head;
    int cnt=0;
    Node* prevL=nullptr;
    
    while(leftP){
        cnt++;
        if(cnt==left) break;
        prevL=leftP;
        leftP=leftP->next;
    }
    
    Node* prev=leftP;
    Node* curr=leftP->next;
    cnt=0;
    
    while(rightP){
        cnt++;
        if(cnt==right) break;
        rightP=rightP->next;
    }
    
    Node* front=rightP->next;
    
    while(curr!=front){
        Node* frontL=curr->next;
        curr->next=prev;
        prev=curr;
        curr=frontL;
    }

    if(prevL){
        prevL->next=prev;
    }
    else head=prev;
    leftP->next=front;

    return head;
}

int main() {
    vector<int> arr={1,2,3,4,5,6};
    Node* head=convertArr2LL(arr);
    print(head);
    head=reverseBetween(head, 2, 4);
    print(head);

    return 0;
}   