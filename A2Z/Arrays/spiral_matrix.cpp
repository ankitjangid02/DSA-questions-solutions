#include <bits/stdc++.h>
using namespace std;

void spiral_matrix(int n, int m){
    vector<vector<int>> matrix(n,vector<int>(m));
    int x=0;
    int inc=0;
    int o=0,y=0,p=m-1;
    for(int i=0; i<=n/2; i++){
        for(int j=i; j<=p; j++){
            if(matrix[i][j]!=0){
                x=1;
                break;
            }
            o=j;
            inc++;
            matrix[i][j]=inc;
        }
        if(x==1) break;
        int e=i;
        y=e;
        p--;
        for(int k=p; k>=e; k--){
            inc++;
            i++;
            matrix[i][o]=inc;
            y=i;
        }
        for(int k=p; k>=e; k--){
            inc++;
            matrix[y][k]=inc;
            o=k;
        }
        p--;
        for(int l=p; l>=e; l--){
            inc++;
            y--;
            matrix[y][o]=inc;
        }
        p++;
        i=e;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    spiral_matrix(3,3);
    return 0;
}