#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<pair<int,int>> s;
    MinStack() {
        
    }
    
    void push(int value) {
        if(s.empty()) s.push({value,value});
        else s.push({value,min(value,s.top().second)});
    }
    
    void pop() {
        s.pop(); 
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};

int main() {
    MinStack q;
    
    q.push(4);
    q.push(2);
    q.push(3);
    q.push(1);
    
    cout<<q.getMin();

    return 0;
}