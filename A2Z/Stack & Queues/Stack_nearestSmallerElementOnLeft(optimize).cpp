#include <bits/stdc++.h>
using namespace std;

vector<int> nearestSmallerElementOnLeft(vector<int>& arr){
    stack<int> s;
    vector<int> nse(arr.size());
    
    for(int i=0; i<arr.size(); i++){
        while(!s.empty() && s.top()>=arr[i]) s.pop();
        if(s.empty()) nse[i]=-1;
        else if(s.top()<arr[i]) nse[i]=s.top();
        else nse[i]=-1;
        s.push(arr[i]);
    }
    
    return nse;
}

int main() {
    vector<int> arr={4,5,2,10,8};
    vector<int> arr2=nearestSmallerElementOnLeft(arr);
    for(int i:arr2){
        cout<<i<<" ";
    }
    

    return 0;
}