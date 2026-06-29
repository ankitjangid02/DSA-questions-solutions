#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
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

Node* removeElements(Node* head, int val) {
    if(!head) return NULL;
    while(head && head->data==val) head=head->next;
    Node* curr=head;
    while(curr && curr->next){
        if(curr->next->data==val){
            curr->next=curr->next->next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

int main() {
    vector<int> arr={1,6,2,3,4,6};

    Node* head=convertArr2LL(arr);
    print(head);
    head=removeElements(head,6);
    print(head);
    
    return 0;
}   