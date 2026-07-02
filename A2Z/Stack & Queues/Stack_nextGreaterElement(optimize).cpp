#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr){
    stack<int> s;
    vector<int> nge(arr.size());
    
    for(int i=arr.size()-1; i>=0; i--){
        while(!s.empty() && s.top()<=arr[i]) s.pop();
        
        if(s.empty()) nge[i]=-1;
        else nge[i]=s.top();
        
        s.push(arr[i]);
    }
    
    return nge;
}

int main() {
    vector<int> arr={4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int> arr2=nextGreaterElement(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }
    

    return 0;
}