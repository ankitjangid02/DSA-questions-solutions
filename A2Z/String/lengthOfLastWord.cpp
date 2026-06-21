#include <bits/stdc++.h>
using namespace std;

int strStr(string str){
    int n=str.size();
    int l=0;
    int s=0;
    for(int i=n-1; i>=0; i--){
        if(str[i]==' '){
            s++;
            continue;
        }
        else break;
    }
    n=n-s;
    // cout<<n;
    s=0;
    for(int i=0; i<n; i++){
        if(str[i]!=' ') s++;
    }
    // cout<<s;
    if(s==n) return n;
    if(n==2){
        if(str[n-1]==' ') return 1;
    }
    for(int i=n-1; i>0; i--){
        if(str[i]!=' ' && str[i-1]==' ') return l+1;
        if(str[i]!=' ') l++;
    }
    return l;
}

int main() {
    cout<<strStr("day   ");
    return 0;
}