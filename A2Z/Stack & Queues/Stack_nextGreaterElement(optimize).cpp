#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr){
    stack<int> s;
    
    for(int i=arr.size()-1; i>=0; i--){
        int temp=arr[i];
        if(s.empty()){
            s.push(temp);
            arr[i]=-1;
        }
        else if(s.top()>temp){
            arr[i]=s.top();
            s.push(temp);
        }
        else if(s.top()<temp){
            while(!s.empty() && s.top()<=temp) s.pop();
            if(s.empty()) arr[i]=-1;
            else arr[i]=s.top();
            s.push(temp);
        }
    }
    
    return arr;
}

int main() {
    vector<int> arr={4,12,5,3,1,2,5,3,1,2,4,6};
    vector<int> arr2=nextGreaterElement(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }
    

    return 0;
}