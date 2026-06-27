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
    Node* temp=head;
    int cnt0=0, cnt1=0, cnt2=0;
    while(temp){
        if(temp->data==0) cnt0++;
        else if(temp->data==1) cnt1++;
        else cnt2++;
        temp=temp->next;
    }
    temp=head;
    while(temp){
        if(cnt0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1){
            temp->data=1;
            cnt1--;
        }
        else{
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;
    }
    return head;
}

int main() {
    vector<int> arr={0,1,1,0,2,2,1,0,0};

    Node* head=convertArr2LL(arr);
    print(head);
    head=sort0s1s2s(head);
    print(head);
    
    

    return 0;
}   