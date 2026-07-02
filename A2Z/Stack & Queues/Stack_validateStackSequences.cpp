#include <bits/stdc++.h>
using namespace std;

bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int> s;
    int j=0;
    for(int i:pushed){
        s.push(i);
        while(!s.empty() && s.top()==popped[j]){
            s.pop();
            j++;
        }
    }
    return s.empty();
}

int main() {
    vector<int> pushed={1,2,3,4,5};
    vector<int> popped={4,5,3,2,1};
    cout<<validateStackSequences(pushed, popped);
   
    return 0;
}