#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        cout<<"pushed "<<x<<endl;
    }
    
    int pop() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }
    
    int peek() {
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout<<"popped "<<q.pop()<<endl;
    cout<<"top "<<q.peek()<<endl;
    cout<<"popped "<<q.pop()<<endl;
    cout<<"top "<<q.peek()<<endl;
    
    cout<<"isEmpty "<<q.empty()<<endl;
    cout<<"popped "<<q.pop()<<endl;

    cout<<"isEmpty "<<q.empty()<<endl;

    return 0;
}