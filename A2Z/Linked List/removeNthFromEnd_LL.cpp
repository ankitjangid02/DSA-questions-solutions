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

// remove Nth element from End
Node* removeNthFromEnd(Node* head, int n) {
    if(head==NULL || head->next==NULL) return NULL;

    Node* tail=head;
    Node* temp=head;
    Node* prev=nullptr;

    int cnt=0;
    int w=0;

    while(tail->next->next!=NULL){
        w++;
        tail=tail->next;
    }

    w=w+2;
        
    if(n==1){
        delete tail->next;
        tail->next=nullptr;
        return head;
    }

    if(n==w){
        Node* g=head;
        head=head->next;
        delete g;
        return head;
    }
        
    while(temp){
        cnt++;
        if(cnt==(w-n+1)){
            prev->next=temp->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
        
    return head;
}

int main() {
    vector<int> arr={12,5,8,7};
    
    Node* head=convertArr2LL(arr);
    print(head);
    head=removeNthFromEnd(head,2);
    print(head);
    

    return 0;
}   