#include <bits/stdc++.h>
using namespace std;
void set_matrix_zero(vector<vector<int>> matrix, int m, int n){
    int col0=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0) matrix[0][j]=0;
                else col0=0;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n ;j++){
            if(matrix[0][i]==0 || matrix[i][0]==0){
                matrix[i][j]=0;
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0; j<n; j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0; i<n ;i++){
            matrix[i][0]=0;
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
    vector<vector<int>> matrix={{1,1,1,1},{1,0,1,1},{1,1,0,1},{0,0,0,1}};
    set_matrix_zero(matrix,4,4);
    return 0;
}