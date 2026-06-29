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

vector<pair<int,int>> findPairsofSum(Node* head, int sum){
    Node* temp1=head;
    vector<pair<int,int>> ds;
    while(temp1){
        Node* temp2=temp1->next;
        while(temp2  && temp1->data+temp2->data<=sum){
            if(temp1->data+temp2->data==sum){
                ds.push_back({temp1->data, temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    return ds;
}

int main() {
    vector<int> arr={1,2,3,4,6};

    Node* head=convertArr2LL(arr);
    print(head);
    vector<pair<int,int>> p=findPairsofSum(head,5);
    for(auto o:p){
        cout<<o.first<<" "<<o.second<<endl;
    }
    return 0;
}   