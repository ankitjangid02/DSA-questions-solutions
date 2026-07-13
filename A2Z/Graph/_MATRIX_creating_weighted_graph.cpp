#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>> n>> m;
    int adj[n+1][m+1];
    for(int i=0; i<m; i++){
        int u,v,w;
        cin>>u>>v>>endl;
        cin>>"weight">>w;
        adj[u][v]=w;
        adj[v][u]=w;
    }
    return 0;
}