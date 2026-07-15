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

Node* convertArr2LL(vector<int> arr){
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

Node* removeDumplicate2(Node* head){
    Node* dummyNode=new Node(-1);
    dummyNode->next=head;
    Node* prev=dummyNode;
    Node* curr=head;
    
    while(curr){
        bool isDuplicate=false;
        while(curr->next && curr->data==curr->next->data){
            isDuplicate=true;
            curr=curr->next;
        }
        if(isDuplicate){
            prev->next=curr->next;
        }
        else{
            prev=prev->next;
        }
        curr=curr->next;
    }
    return dummyNode->next;
}

int main() {
    vector<int> arr={1,1,1,1,2,3,3,3,3,3,3,4};
    
    Node* head=convertArr2LL(arr);
    print(head);
    
    head=removeDumplicate2(head);
    print(head);
    
    return 0;
}