#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s;
    stack<int> min;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(min.empty() || value<=min.top()){
            min.push(value);
        }
    }
    
    void pop() {
        if(s.top()==min.top()) min.pop();
        s.pop(); 
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min.top();
    }
};

int main() {
    MinStack q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(0);
    
    cout<<q.getMin();

    return 0;
}