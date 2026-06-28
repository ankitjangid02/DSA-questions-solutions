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
    // mover->next=head;
    return head;
}

void print(Node* head){
    Node* temp=head;
    int k=10;
    while(temp && k!=0){
        k--;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

bool isLoop(Node* head){
    map<Node*, int> mpp;
    Node* temp=head;
    while(temp!=NULL){
        if(mpp.find(temp)!=mpp.end()) return true;
        mpp[temp]=1;
        temp=temp->next;
    }
    return false;
}

int main() {
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};

    Node* head=convertArr2LL(arr);
    print(head);
    cout<<isLoop(head);
    return 0;
}   