#include <bits/stdc++.h>
using namespace std;
void set_matrix_zero(vector<vector<int>> matrix, int m, int n){
    int col[m]={0}, row[n]={0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(row[i] || col[j]){
                matrix[i][j]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> matrix={{1,1,1,1},{1,0,1,1},{1,1,0,1},{1,0,0,1}};
    set_matrix_zero(matrix,4,4);
    return 0;
}