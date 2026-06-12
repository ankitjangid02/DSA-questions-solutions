#include <iostream>
using namespace std;
int i=0,x=0;

int main() {
    string a;
    cin>>a;
    
    // pre computation
    int hash[256]={0};
    for(int i=0;i<a.length();i++){
        int b=a[i];
        hash[b] +=1;
    }
    
    int x;
    cin>>x;
    char y[x];
    for(int i=0;i<x;i++){
        cin>>y[i];
        
    }
    for(int i=0;i<x;i++){
        int z=y[i];
        cout<<hash[z]<<endl;
    }
    
}