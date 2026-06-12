#include <iostream>
using namespace std;
int i=0,x=0;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    // pre computation
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]] +=1;
    }
    
    int x;
    cin>>x;
    int y[x];
    for(int i=0;i<x;i++){
        cin>>y[i];
        
    }
    for(int i=0;i<x;i++){
        cout<<hash[y[i]]<<endl;
    }
    
}