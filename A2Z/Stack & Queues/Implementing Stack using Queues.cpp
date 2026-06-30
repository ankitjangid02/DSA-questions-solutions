#include <bits/stdc++.h>
using namespace std;

class MyStack{
  public:
  
  queue<int> q;
  
  MyStack(){
      
  }
  
  void push(int x){
      int n=q.size();
      q.push(x);
      for(int i=0; i<n; i++){
          q.push(q.front());
          q.pop();
      }
      cout<<"pushed "<<x<<endl;
  }
  
  int pop(){
      int x=q.front();
      q.pop();
      return x;
  }
  
  int top(){
      return q.front();
  }
  
  bool empty(){
      return q.empty();
  }
};

int main() {
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout<<"top "<<s.top()<<endl;
    
    cout<<"pop "<<s.pop()<<endl;
    cout<<"top "<<s.top()<<endl;
    
    cout<<"pop "<<s.pop()<<endl;
    cout<<"top "<<s.top()<<endl;
    
    cout<<"isEmpty "<<s.empty()<<endl;
    cout<<"pop "<<s.pop()<<endl;

    cout<<"isEmpty "<<s.empty()<<endl;
    return 0;
}   