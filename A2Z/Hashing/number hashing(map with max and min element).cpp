#include <bits/stdc++.h>
using namespace std;
void max1(map<int,int> m){
    if (m.empty()) return;
    int x_key=m.begin()->first;
    int x_value=m.begin()->second;
    for(auto y:m){
        if(y.second>x_value){
            x_key=y.first;
            x_value=y.second;
        }
    }
    cout<<x_key<<"-->"<<x_value;
}
void min(map<int,int> m){
    if (m.empty()) return;
    int x_key=m.begin()->first;
    int x_value=m.begin()->second;
    for(auto y:m){
        if(y.second<x_value){
            x_key=y.first;
            x_value=y.second;
        }
    }
    cout<<x_key<<"-->"<<x_value;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    // Pre-compute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    
    int q;
    cin>>q;
    int e[q];
    for(int i=0;i<q;i++){
        cin>>e[i];
    }
    for(int i=0;i<q;i++){
        cout<<mpp[e[i]]<<endl;
        
    }
    
    max1(mpp);
    cout<<endl;
    min(mpp);
    return 0;
}