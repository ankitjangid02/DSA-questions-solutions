#include <bits/stdc++.h>
using namespace std;
void rotate_matrix_by_90(vector<vector<int>> matrix, int m, int n){
    vector<vector<int>> matrix2(m ,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            matrix2[j][(m-1)-i]=matrix[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix2[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main() {
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotate_matrix_by_90(matrix,4,4);
    return 0;
}