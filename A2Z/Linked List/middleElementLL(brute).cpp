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

Node* middleElementLL(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    int mid=(cnt/2)+1;
    temp=head;
    while(temp){
        mid--;
        if(mid==0) break;
        temp=temp->next;
    }
    return temp;
}

int main() {
    vector<int> arr={1,2,3,4,5};

    Node* head=convertArr2LL(arr);
    print(head);
    Node* temp=middleElementLL(head);
    print(temp);
    return 0;
}   