#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
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
    int k=10;
    while(temp && k!=0){
        k--;
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// within linked list
Node* merge2sortedLL(Node* head1, Node* head2){
    Node* t1=head1;
    Node* t2=head2;
    Node* dNode=new Node(-1);
    Node* temp=dNode;
    
    while(t1 && t2){
        if(t1->data<t2->data){
            temp->next=t1;
            temp=t1;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp=t2;
            t2=t2->next;
        }
    }
    if(t1) temp->next=t1;
    else temp->next=t2;

    return dNode->next;
}

int main() {
    vector<int> arr1={1,3,3,4};
    vector<int> arr2={2,3,5,6};

    Node* head1=convertArr2LL(arr1);
    print(head1);
    Node* head2=convertArr2LL(arr2);
    print(head2);
    Node* head=merge2sortedLL(head1,head2);
    print(head);
    return 0;
}   