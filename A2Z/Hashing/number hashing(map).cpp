#include <bits/stdc++.h>
using namespace std;
int i=0,x=0;

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
    return 0;
}