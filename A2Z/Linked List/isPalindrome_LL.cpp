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

bool isPalindrome(Node* head) {
    if(head==NULL || head->next==NULL) return true;

    Node* slow=head;
    Node* fast=head;

    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* prev=nullptr;
    while(slow){
        Node* front=slow->next;
        slow->next=prev;
        prev=slow;
        slow=front;
    }

    Node* first=head;
    Node* second=prev;

    while(second){
        if(first->data!=second->data) return false;
        first=first->next;
        second=second->next;
    }
    return true;
}

int main() {
    vector<int> arr={1,2,3,2,1};

    Node* head=convertArr2LL(arr);
    print(head);
    cout<<isPalindrome(head);

    return 0;
}   